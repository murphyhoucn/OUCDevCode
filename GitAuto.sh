
#!/bin/bash

server_name=$(hostname)

# 设置commit消息中的起始标记
START_TAG="[Auto Commit]"

current_time=$(date "+%Y_%m_%d__%H_%M_%S")

# 执行git status
echo "Running git status..."
git status

# 执行git add .
echo "Running git add..."
git add .

# 检查是否有更改需要提交
if git diff-index --quiet HEAD --; then
    echo "No changes to commit."
else
    # 执行git commit
    echo "Running git commit..."
    git commit -m "$START_TAG $current_time {From $server_name}"

    # 执行git push
    echo "Running git push..."
    git push
fi