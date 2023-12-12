#include "�����.h";
typedef struct TreeNode {
    int key;
    struct TreeNode* left, * right;
} TreeNode;

TreeNode* newTreeNode(int item) {
    TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

TreeNode* insert(TreeNode* node, int key) {
    if (node == NULL) return newTreeNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}

TreeNode* minValueNode(TreeNode* node) {
    TreeNode* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == NULL) return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            TreeNode* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            TreeNode* temp = root->left;
            free(root);
            return temp;
        }
        TreeNode* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

void inorder(TreeNode* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d \n", root->key);
            inorder(root->right);
    }
}

int bt() {
    system("cls");
    TreeNode* root = NULL;
    int choice, key;
    while (1) {
        printf("����Ž��Ʈ��\n����Ž��Ʈ���� ū ���� �����ʿ�, ���� ���� ���ʿ� ��ġ�ϰ��� ����Ʈ���̴�.");
        printf("1: ���� 2: ���� 3: ��� 4: ������\n");
            scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("������ Ű: ");
            scanf("%d", &key);
            root = insert(root, key);
            break;
        case 2:
            printf("������ Ű: ");
            scanf("%d", &key);
            root = deleteNode(root, key);
            break;
        case 3:
            printf("����Ž��: \n");
                inorder(root);
            break;
        case 4:
            exit(0);
        }
    }

    return 0;
}