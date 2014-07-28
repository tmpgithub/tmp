tmp
===

temporary repo for playing with the github process

To add changes to this repository:

Use the fork & pull method as described here:

https://help.github.com/articles/using-pull-requests

## Work flow example.

### Initial steps...

These steps only need to happen once, and then you can use your local copy of your fork as your working copy.  Of course, you can repeat these steps any time you like and create as many forks as you like.

0. Login to the github web interface with your account
1. Navigate to pmem.io/tmp, click on View on GitHub button
2. Click on the Fork button in the upper right to create your own fork
3. Navigate to your fork, the repo in under your account
4. Grab the *clone URL* from box the lower right
	* Click **SSH** and grab that URL, like `git@github.com:MY_GITHUB_ACCOUNT/tmp.git`
5. Clone your repo to your local machine:
	* Example: `git clone https://github.com/MY_GITHUB_ACCOUNT/tmp.git`
	* your SSH key (in settings) must be set for this to work
	* you may need git-proxy configuration
6. Set up the original repo as a remote called *upstream*
	* Example: `git remote add upstream git@github.com:pmem/tmp.git`

### Making a change

Most of these steps happen on your local machine.  The github web interface is only necessary as noted.

1. Create a topic branch for your work
	* Example: `git checkout -b MY_BRANCH_NAME`
	* Use any branch name you like, it won't end up in the main repo
2. Edit/Test/Commit...
3. Push changes up to your github area
	* Example `git push origin MY_BRANCH_NAME`
4. Using the web interface, submit a pull request
	* See *Initiating the pull request* here: https://help.github.com/articles/using-pull-requests
5. Use the web interface to participate in the discussion of your pull request
6. As required, make additional changes to the same branch and push them to your github area
	* Your updates will automatically become part of the existing pull request

### After the pull request is accepted

To prepare for the next change, you'll want to delete the old topic branch and
re-sync with the original repo.  Of course you can always just delete your tree
and start with the initial steps again.

0. Go back to the master branch on your local tree
	* Example: `git checkout master`
1. Delete the old topic branch locally
	* Example: `git branch -D MY_BRANCH_NAME`  **DISCARDS CHANGES IN MY_BRANCH_NAME!**
2. Delete the old topic branch in your github area
	* Example: `git push origin --delete MY_BRANCH_NAME`
3. Pull latest changes from original repo
	* Example: `git pull upstream master`
4. Push the update back to your github area
	* Example: `git push origin master`
