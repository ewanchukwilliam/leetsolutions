// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// Define a new struct for deque nodes
typedef struct DequeNode {
  struct TreeNode *treeNode;
  struct DequeNode *next;
} DequeNode;

typedef struct Deque {
  DequeNode *front;
  DequeNode *back;
  int length;
} Deque;

// Create a new deque
Deque *createDeque() {
  Deque *deque = (Deque *)malloc(sizeof(Deque));
  deque->front = deque->back = NULL;
  deque->length = 0;
  return deque;
}

// Push a new tree node to the back of the deque
void push_back(Deque *deque, struct TreeNode *treeNode) {
  if (treeNode == NULL) {
    return;
  }
  DequeNode *newNode = (DequeNode *)malloc(sizeof(DequeNode));
  newNode->treeNode = treeNode;
  newNode->next = NULL;
  
  if (deque->back == NULL) {
    deque->front = deque->back = newNode;
  } else {
    deque->back->next = newNode;
    deque->back = newNode;
  }
  deque->length++;
}

// Pop a tree node from the front of the deque
struct TreeNode *pop_front(Deque *deque) {
  if (deque->front == NULL) {
    return NULL;
  }
  
  DequeNode *temp = deque->front;
  struct TreeNode *treeNode = temp->treeNode;
  
  deque->front = deque->front->next;
  if (deque->front == NULL) {
    deque->back = NULL;
  }
  
  free(temp);
  deque->length--;
  
  return treeNode;
}

// Free the entire deque
void freeDeque(Deque *deque) {
  DequeNode *current = deque->front;
  while (current != NULL) {
    DequeNode *temp = current;
    current = current->next;
    free(temp);
  }
  free(deque);
}

typedef struct {
  long *items;
  int size;
} DynamicList;

// Initialize the list
void initList(DynamicList *list) {
  list->items = NULL;
  list->size = 0;
}

// Insert a new element into the list
void insertElement(DynamicList *list, long value) {
  long *newItems = realloc(list->items, (list->size + 1) * sizeof(long));
  list->items = newItems;
  list->items[list->size] = value;
  list->size++;
}

// Free the list
void freeList(DynamicList *list) {
  free(list->items);
  list->items = NULL;
  list->size = 0;
}

// Sort the list using bubble sort (for simplicity)
void bubbleSort(DynamicList *list) {
  for (int i = 0; i < list->size - 1; i++) {
    for (int j = 0; j < list->size - i - 1; j++) {
      if (list->items[j] > list->items[j + 1]) {
        long temp = list->items[j];
        list->items[j] = list->items[j + 1];
        list->items[j + 1] = temp;
      }
    }
  }
}

// Function to compute the kth largest level sum
long long kthLargestLevelSum(struct TreeNode *root, int k) {
  // Handle edge case of an empty tree
  if (root == NULL) {
    return -1;
  }
  Deque *deque = createDeque();
  push_back(deque, root);
  DynamicList levels;
  initList(&levels);
  while (deque->length > 0) {
    int length = deque->length;
    long sum = 0;
    
    for (int i = 0; i < length; i++) {
      struct TreeNode *node = pop_front(deque);
      sum += node->val;
      if (node->left) {
        push_back(deque, node->left);
      }
      if (node->right) {
        push_back(deque, node->right);
      }
    }
    insertElement(&levels, sum);
  }

  // Check if k is valid
  if (levels.size < k) {
    freeList(&levels);
    freeDeque(deque);
    return -1;
  }

  // Sort the levels and find the kth largest
  bubbleSort(&levels);
  long long answer = levels.items[levels.size - k];

  freeList(&levels);
  freeDeque(deque);
  
  return answer;
}
// @leet end
