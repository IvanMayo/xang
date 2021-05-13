# Initial configuration

## Setting a name to identify
## Setting an email address
	>git config --global user.name “USER NAME”
	>git config —global user.email “EMAIL ALREADY CREATED”

# Setup and init

## NEW ONE: Initialize an existing directory as a Git repository
## CLONE : Retrieve an entire repository from a hosted location via URL
	>git init
	>git clone urloftherepositorytoclone

# Stage and commit

## Shows the status of the modified files in the directory

## Adds a file to git so in the next commit it will be reflected

## Unstage the file while retaining the changes in working directory

## Makes commitments of the stage content
> git status
> git add FILENAME.(format of the file)
> git reset FILENAME.(format of the file)
> git commit -m “NAME OF THE CHANGE”

# Remote repository
## Push to a remote repository
> git push remote branch

## The branch will be pushed to the remote and it will be asked for the terminal the following:
> Username for ‘https:((GitHub.com’:
> Password for ‘https://	@github.com’:

# Branches
## Create a new branch at the current commit
## Delete a local branch unless it contains commits that have not been merged into any other local branches or pushed to a remote repository
## Forcing the delete of a branch
## Delete a remote branch
## Save or commit by transmitting local brach commits
## Merge the branchs
> git branch nameofthebranch
> git branch -d local-branch
> git branch -D local-branch
> git push origin —delete remote-branch-name
> git push alias/nameofthebranch
> git merge alias/nameofthebranch 

# The following part is a total copy, I don´t understand it
Gitflow
It is a flow designed for work, having a model of branching around project post, mostly for managing larger projects

-Executing it in OS X system:(It is not necessary install it, is already there)

	brew install git-flow
-Installing it in Windows:(After installing git.flow)

	git flow init
It only creates branchs, will not modify the repository.

-Creation by a developer, local branch empty and send it to te serve (MASTER)

git branch develop
git push -u origin develop
-Creation of a function branch (FUNCTION NOT MIXED WITH THE MASTER)

	-Without the git-flow extensions:
	
	git checkout develop
	git checkout -b feature_branch
	
	-With the git-flow extensions:
	
	git flow feature start feature_branch
-Ending a function branch

	-Without the git-flow extensions:
	
	git checkout develop
	git merge feature_branch
	
	-With the git-flow extensions:
	
	git flow feature finish feature_branch
-Adjustment branch (Hotfix): Used for fixing post of production. Linked with the MASTER branch. Will be merged with the master and development branch.

	**-Without the git-flow extensions:
	
	git checkout master
	git checkout -b hotfix_branch
	
	-With the git-flow extensions:
	
	git flow hot fix start hotfix_branch
