import os

# 현재 작업 디렉토리에서 시작
root_dir = "."

for root, dirs, files in os.walk(root_dir):
    for file in files:
        if file.endswith(".exe"):
            file_path = os.path.join(root, file)
            os.remove(file_path)
            print(f"Deleted: {file_path}")
