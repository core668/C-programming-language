GitHub是什么？怎么用？Git是什么？怎么用？


GitHub是一个面向开源及私有软件项目的托管平台，因为只支持Git作为唯一的版本库格式进行托管，故名GitHub。

1.https://github.com/登录这个网站注册账号

2.点击右上角的加号选择New repository创建一个新的仓库

3.添加文件 Add file(Create new file/Upload files)

4.提交issue（议题） 点击issues---选择New issue---submit

5.提交/接受pull request（拉取请求）

Git（工具）是分布式版本控制系统，可以保存文件的所有修改记录，使用版本号进行区分，可随时将改错的文件还原到指定本，起到恢复和保护作用。

1.https://git-scm.com/下载

2.右键Git Bash Here

3.配置用户名和邮箱

 $ git config --global user.name core668

 $ git config --global user.email 403276838@qq.com

3.用git实现代码管理
  1）从github上下载源码

   $ git clone https://github.com/core668/C-programming-language.git

  2)本地新建一个文件夹，打开文件夹

  右键Git Bash Here

   git init初始化

 3)提交文件

   git add . 将当前文件夹内的所有文件和非空文件夹设置为准备提交状态

   git add 文件名 将当前文件设置为准备提交状态

   git add -A  提交所有变化

   git add -u  提交被修改(modified)和被删除(deleted)文件，不包括新文件(new)

   git add .  提交新文件(new)和被修改(modified)文件，不包括被删除(deleted)文件

   git commit -m "本次提交的备注，修改了什么"

   git log 查看提交的历史记录

 4)回滚

   git checkout HEAD 文件名 从最后一次提交里复制文件覆盖到工作区

   工作区回滚：git checkout <filename>
   撤销最后一次提交：git reset HEAD^1

 5）分支

  以当前分支为基础新建分支：git checkout -b <branchname>
  列举所有的分支：git branch
  单纯地切换到某个分支：git checkout <branchname>
  切换回主分支后合并分支：git merge <branchname>

  分支冲突时：git merge --abort 放弃合并

  合并完成后分支完成使命删掉特定的分支：git branch -D <branchname>          

怎么使用Git将本地项目上传到Github?

将C-programming-language 当作远端仓库添加到本地git中

git remote add origin https://github.com/core668/C-programming-language.git

将本地主分支改成main

git branch -M main

推送到远端仓库

git push -u origin main

本地工作区----暂存区----提交本地仓库-----远端仓库

推送当前分支最新的提交到远程：git push
拉取远程分支最新的提交到本地：git pull


