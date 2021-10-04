Rules for the Contribution.

Issues will be assigned on First Come First Service Basis.
You can create a new issue.
Maintainer will add hactoberfest label, if the issue created by you is relevant.
Don't Spam the PR otherwise spam label can be added to your PR.
After creating a PR link the issue also.
5 Questions of Codeforces||Codechef will be counted as 1 PR.
One Contest of Codeforces or Codechef will be counted as 1 PR.
If you have any doubt, you can post on the Discussions tab.

How to Contribute to this repository
Fork a project
You can make a copy of the project to your account. This process is called forking a project to your Github account. On Upper right side of project page on Github, you can see -

Clone the forked repository to your local machine.
$ git clone https://github.com/your_username/Important_Coding_Problems.git
change the present working directory
cd Important_Coding_Problems
Add a remote (upstream) to original project repository
Remote means the remote location of project on Github. By cloning, we have a remote called origin which points to your forked repository. Now we will add a remote to the original repository from where we had forked.

$ git remote add upstream https://github.com/a08/Important_Coding_Problems.git 
You will see the benefits of adding remote later.

Synchronizing your fork
Open Source projects have a number of contributors who can push code anytime. So it is necessary to make your forked copy equal with the original repository. The remote added above called Upstream helps in this.

$ git checkout main
$ git fetch upstream
$ git merge upstream/main
$ git push origin main
The last command pushes the latest code to your forked repository on Github. The origin is the remote pointing to your forked repository on github.

Add/Create your project to the specific folder as described in what you can contribute section.
Make a new branch
git checkout -b branch-name
Make change in the repository with the new branch.
push the changes.
git add .
git commit -m "Your commit Message"
git push origin branch-name
Make a pull request. Click on create pull request and add a name to your pull request
Star the repository.
Coding_problems
Questions are according to Topics (T1, T2, etc.)
CodeChef Questions and CodeForces Questions are also available
C++ STL Notes + Questions are available (pdf downloadable)
For any kind of Contribution Feel Free to Create an Issue and respective PR.
Questions covered
Contest   - Codechef     - Codechef Starters     - Long Challenge     - Lunchtime     - Cookoff     - Algomaniac
  - Codeforces     - Division 2 Contest     - Division 3 Contest

CodeForces(Practice)   - C++   - Java

AtCoder(Practice)   - C++   - Java

C++   - Standard Template Library(STL)     - Notes     - Questions

  - OOPs     - Notes     - Practice MCQs

Data Structure   - Introduction   - Array     - 1D array     - 2D array   - Bit Manipulation   - Strings   - Searching   - Sorting   - Hashing   - Recursion   - Stack   - Linked List     - Circular Linked List     - Doubly Linked List     - Single Linked List   - Queue     - Basic Queue     - Circular Queue     - Priority Queue   - Trees     - AVL Trees     - B+ Trees     - Binary Trees     - Red Black Trees   - Graph     - Directed Graph     - Undirected Graph   - Heap   - BackTracking   - Dynamic Programming
Credit goes to these
