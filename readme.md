# Awesome Hacktoberfest [![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome)

> Hacktoberfest-related resources

[![Hacktoberfest 2019 logo](https://hacktoberfest.digitalocean.com/assets/logo-hf19-header-8245176fe235ab5d942c7580778a914110fa06a23c3d55bf40e2d061809d8785.svg)](https://benbarth.github.io/hacktoberfest-swag/)

## Official website for registration and tips on how to get started

- [Hacktoberfest Official Website](https://hacktoberfest.digitalocean.com/)
- [Hacktoberfest Tutorial](https://youtu.be/0mjJS1Y8wrI) - Introduction to Hacktoberfest
- [Hacktoberfest Swag List](https://benbarth.github.io/hacktoberfest-swag/) - List of all goodies given away by companies

## Blogs

- [Hacktoberfest 2019 — Time to Start your Open-Source Journey!](https://medium.com/@swap/hacktoberfest-2019-time-to-start-your-open-source-journey-8227e10fac33) - Article on the basics of Hacktoberfest

## Companies participating in Hacktoberfest

- [Accord](https://www.accordproject.org/events/hacktoberfest-2019/)
- [Appwrite](https://medium.com/appwrite-io/hacktoberfest-2019-is-almost-here-lets-celebrate-it-together-24b311236dd)
- [Aqua Security](https://blog.aquasec.com/aqua-open-source-security-hacktoberfest)
- [Circle CI](https://circleci-public.github.io/hacktoberfest/#/)
- [Coding Blocks](https://blog.codingblocks.com/2019/cb-hacktoberfest-2019/)
- [Devfolio](https://devfolio.co/blog/hacktoberfest-2019-devfolio/)
- [Gatsby](https://github.com/gatsbyjs/store.gatsbyjs.org)
- [Hasura](https://blog.hasura.io/hasura-joins-hacktoberfest-2019/)
- [Sendgrid](https://sendgrid.com/blog/hacktoberfest-2018-hack-on-sendgrid-open-source-projects/)
- [Source{d}](https://go.sourced.tech/hacktoberfest)


## Nonprofits participating in hacktoberfest

- [If-Me](https://github.com/ifmeorg/ifme/labels/hacktoberfest)
- [Oppia](https://github.com/oppia/oppia/labels/Hacktoberfest)

## Finding Issues

Finding a good issue to work on takes time.
Here, you find possibilities to ease the search.

### Search engines

- [Issue Finder](http://hacktoberfest-finder.netlify.com) - finds issues made especially for hacktoberfest, also allows to filter by language
- [Up For Grabs](https://up-for-grabs.net/#/) - find beginner-friendly projects and issues

### Using Labels

With these labels, one finds issues to level up his skills in hacktoberfest.

- [hacktoberfest](https://github.com/search?q=label%3Ahacktoberfest+state%3Aopen+type%3Aissue) - label especially created for hacktoberfest
- [first-timers-only](https://github.com/search?q=label%3Afirst-timers-only+state%3Aopen+type%3Aissue)
- [for-new-contributors](https://github.com/search?q=label%3Afor-new-contributors+state%3Aopen+type%3Aissue)
- [good-first-issue](https://github.com/search?q=label%3Agood-first-issue+state%3Aopen+type%3Aissue)

## Projects made for Hacktoberfest

Here you find projects that were made especially for hacktoberfest.

- [hacktoberfest-status](https://github.com/niclasleonbock/hacktoberfest-status)
- [Issue Finder](http://hacktoberfest-finder.netlify.com) - finds issues made especially for hacktoberfest, also allows to filter by language

## Projects friendly to Hacktoberfest 1st time contributors

Below you will find awesome projects that have been put notable efforts into Hacktoberfest.
They try to be very welcoming for 1st time contributors.
## Everyday Git in twenty commands or so
```sh
git help everyday
```

## Show helpful guides that come with Git
```sh
git help -g
```

## Search change by content
```sh
git log -S'<a term in the source>'
```

## Sync with remote, overwrite local changes
```sh
git fetch origin && git reset --hard origin/master && git clean -f -d
```

## List of all files till a commit
```sh
git ls-tree --name-only -r <commit-ish>
```

## Git reset first commit
```sh
git update-ref -d HEAD
```

## List all the conflicted files
```sh
git diff --name-only --diff-filter=U
```

## List of all files changed in a commit
```sh
git diff-tree --no-commit-id --name-only -r <commit-ish>
```

## Unstaged changes since last commit
```sh
git diff
```

## Changes staged for commit
```sh
git diff --cached
```


__Alternatives:__
```sh
git diff --staged
```

## Show both staged and unstaged changes
```sh
git diff HEAD
```

## List all branches that are already merged into master
```sh
git branch --merged master
```

## Quickly switch to the previous branch
```sh
git checkout -
```


__Alternatives:__
```sh
git checkout @{-1}
```

## Remove branches that have already been merged with master
```sh
git branch --merged master | grep -v '^\*' | xargs -n 1 git branch -d
```


__Alternatives:__
```sh
git branch --merged master | grep -v '^\*\|  master' | xargs -n 1 git branch -d # will not delete master if master is not checked out
```

## List all branches and their upstreams, as well as last commit on branch
```sh
git branch -vv
```

## Track upstream branch
```sh
git branch -u origin/mybranch
```

## Delete local branch
```sh
git branch -d <local_branchname>
```

## Delete remote branch
```sh
git push origin --delete <remote_branchname>
```


__Alternatives:__
```sh
git push origin :<remote_branchname>
```

## Delete local tag
```sh
git tag -d <tag-name>
```

## Delete remote tag
```sh
git push origin :refs/tags/<tag-name>
```

## Undo local changes with the last content in head
```sh
git checkout -- <file_name>
```

## Revert: Undo a commit by creating a new commit
```sh
git revert <commit-ish>
```

## Reset: Discard commits, advised for private branch
```sh
git reset <commit-ish>
```

## Reword the previous commit message
```sh
git commit -v --amend
```

## See commit history for just the current branch
```sh
git cherry -v master
```

## Amend author.
```sh
git commit --amend --author='Author Name <email@address.com>'
```

## Reset author, after author has been changed in the global config.
```sh
git commit --amend --reset-author --no-edit
```

## Changing a remote's URL
```sh
git remote set-url origin <URL>
```

## Get list of all remote references
```sh
git remote
```


__Alternatives:__
```sh
git remote show
```

## Get list of all local and remote branches
```sh
git branch -a
```

## Get only remote branches
```sh
git branch -r
```

## Stage parts of a changed file, instead of the entire file
```sh
git add -p
```

## Get git bash completion
```sh
curl http://git.io/vfhol > ~/.git-completion.bash && echo '[ -f ~/.git-completion.bash ] && . ~/.git-completion.bash' >> ~/.bashrc
```

## What changed since two weeks?
```sh
git log --no-merges --raw --since='2 weeks ago'
```


__Alternatives:__
```sh
git whatchanged --since='2 weeks ago'
```

## See all commits made since forking from master
```sh
git log --no-merges --stat --reverse master..
```

## Pick commits across branches using cherry-pick
```sh
git checkout <branch-name> && git cherry-pick <commit-ish>
```

## Find out branches containing commit-hash
```sh
git branch -a --contains <commit-ish>
```


__Alternatives:__
```sh
git branch --contains <commit-ish>
```

## Git Aliases
```sh
git config --global alias.<handle> <command>
git config --global alias.st status
```

## Saving current state of tracked files without commiting
```sh
git stash
```


__Alternatives:__
```sh
git stash save
```


### CSS

([all CSS projects with hacktoberfest issues](https://github.com/search?utf8=%E2%9C%93&q=label%3Ahacktoberfest+state%3Aopen+type%3Aissue+language%3AJava&type=Issues&ref=advsearch&l=CSS))

- [shopee_design](https://github.com/bluetch/shopee_design)
- [crystal-ann](https://github.com/crystal-community/crystal-ann)

### Dart / Flutter

([all dart projects with hacktoberfest issues](https://github.com/search?utf8=%E2%9C%93&q=label%3Ahacktoberfest+state%3Aopen+type%3Aissue+language%3ADart&type=Issues&ref=advsearch&l=Dart&l=))

- [The Public Transport](https://github.com/thepublictransport/thepublictransport-app)

### HTML

([all HTML projects with hacktoberfest issues](https://github.com/search?utf8=%E2%9C%93&q=label%3Ahacktoberfest+state%3Aopen+type%3Aissue+language%3AJava&type=Issues&ref=advsearch&l=HTML))

- [league_app](https://github.com/connorphee/league_app)

### JavaScript

([all JavaScript projects with hacktoberfest issues](https://github.com/search?utf8=%E2%9C%93&q=label%3Ahacktoberfest+state%3Aopen+type%3Aissue+language%3AJava&type=Issues&ref=advsearch&l=JavaScript))

- [jest-extended](https://github.com/mattphillips/jest-extended)
- [vue-dropzone](https://github.com/rowanwins/vue-dropzone)

### Java

([all Java projects with hacktoberfest issues](https://github.com/search?utf8=%E2%9C%93&q=label%3Ahacktoberfest+state%3Aopen+type%3Aissue+language%3AJava&type=Issues&ref=advsearch&l=Java&l=))

- [JabRef](https://www.jabref.org/hacktoberfest/2019.html)

### PHP

([all PHP projects with hacktoberfest issues](https://github.com/search?utf8=%E2%9C%93&q=label%3Ahacktoberfest+state%3Aopen+type%3Aissue+language%3APHP&type=Issues&ref=advsearch&l=&l=))

- [hacktoberfest-status](https://github.com/niclasleonbock/hacktoberfest-status)

### Python

([all python projects with hacktoberfest issues](https://github.com/search?utf8=%E2%9C%93&q=label%3Ahacktoberfest+state%3Aopen+type%3Aissue+language%3APython&type=Issues&ref=advsearch&l=Dart&l=))

- [django-gamification](https://github.com/mattjegan/django-gamification)
- [howlong](https://github.com/mattjegan/HowLong)
- [python-ds](https://github.com/prabhupant/python-ds) - datastructures implemented in PYthon
- [quick-net](https://github.com/Zwork101/quick-net)
- [Ralph](https://github.com/allegro/ralph)
- [Tipboard](https://github.com/allegro/tipboard)
- [wtfuzz](https://github.com/mattjegan/wtfuzz)

### React

([all React projects with hacktoberfest issues](https://github.com/search?utf8=%E2%9C%93&q=label%3Ahacktoberfest+state%3Aopen+type%3Aissue+language%3ADart&type=Issues&ref=advsearch&l=React&l=))

- [Hacktoberfest Checker](https://hacktoberfestchecker.jenko.me/) - check your Hacktoberfest progress. [[Source](https://github.com/jenkoian/hacktoberfest-checker)]

## SVG

- [atom-icons](https://github.com/HackeSta/atom-icons)

## Misc Resources

- [AwesomeSearch](https://awesomelists.top/) - search engine for [the awesome list](https://github.com/sindresorhus/awesome/blob/master/readme.md) providing useful programming resources.
- [Build a Hacktoberfest Checker Clone](https://pybit.es/codechallenge38.html)
- [Reading List](https://github.com/mattjegan/reading-list)



## Contribute

Contributions are welcome! Read the [contribution guidelines](contributing.md) first.

## License

[![CC0](http://mirrors.creativecommons.org/presskit/buttons/88x31/svg/cc-zero.svg)](http://creativecommons.org/publicdomain/zero/1.0)

To the extent possible under law, Matthew Egan has waived all copyright and related or neighboring rights to this work.
