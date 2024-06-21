class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

def print_binary_tree_top_to_bottom(root):
    if root is None:
        return
    
    queue = [root]  
    level = 0

    while queue:
        level_size = len(queue)
        print(f"Level {level}: ", end="")
        
        for _ in range(level_size):
            node = queue.pop(0)
            print(node.value, end=" ")

            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)
        
        print() 
        level += 1


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
root.right.left = Node(6)
root.right.right = Node(7)

print("Árvore binária de cima para baixo:")
print_binary_tree_top_to_bottom(root)

