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

## ⚡️ Git Cheat Sheet
* [Set Up](#setup)
* [Configuration Files](#configuration-files)
* [Create](#create)
* [Local Changes](#local-changes)
* [Search](#search)
## Setup

##### Show current configuration:
```
$ git config --list
```
##### Show repository configuration:
```
$ git config --local --list
```

##### Show global configuration:
```
$ git config --global --list
```

##### Show system configuration:
```
$ git config --system --list
```

##### Set a name that is identifiable for credit when review version history:
```
$ git config --global user.name "[firstname lastname]"
```

##### Set an email address that will be associated with each history marker:
```
$ git config --global user.email "[valid-email]"
```

##### Set automatic command line coloring for Git for easy reviewing:
```
$ git config --global color.ui auto
```

##### Set global editor for commit:
```
$ git config --global core.editor vi
```

<hr>

## Configuration Files

##### Repository specific configuration file [--local]:
```
<repo>/.git/config
```

##### User-specific configuration file [--global]:
```
~/.gitconfig
```

##### System-wide configuration file [--system]:
```
/etc/gitconfig
```

<hr>

## Create

##### Clone an existing repository:

There are two ways:

Via SSH

```
$ git clone ssh://user@domain.com/repo.git
```

Via HTTP

```
$ git clone http://domain.com/user/repo.git
```

##### Create a new local repository:
```
$ git init
```

<hr>

## Local Changes

##### Changes in working directory:
```
$ git status
```

##### Changes to tracked files:
```
$ git diff
```

##### Add all current changes to the next commit:
```
$ git add .
```

##### Add some changes in &lt;file&gt; to the next commit:
```
$ git add -p <file>
```

##### Commit all local changes in tracked files:
```
$ git commit -a
```

##### Commit previously staged changes:
```
$ git commit
```

##### Commit with message:
```
$ git commit -m 'message here'
```

##### Commit skipping the staging area and adding message:
```
$ git commit -am 'message here'
```

##### Commit to some previous date:
```
$ git commit --date="`date --date='n day ago'`" -am "<Commit Message Here>"
```

##### Change last commit:<br>
<em><sub>Don't amend published commits!</sub></em>

```
$ git commit -a --amend
```

##### Amend with last commit but use the previous commit log message
<em><sub>Don't amend published commits!</sub></em>

```shell
$ git commit --amend --no-edit
```

##### Change committer date of last commit:
```
GIT_COMMITTER_DATE="date" git commit --amend
```

##### Change Author date of last commit:
```shell
$ git commit --amend --date="date"
```

##### Move uncommitted changes from current branch to some other branch:<br>
```
$ git stash
$ git checkout branch2
$ git stash pop
```

##### Restore stashed changes back to current branch:
```shell
$ git stash apply
```

#### Restore particular stash back to current branch:
- *{stash_number}* can be obtained from `git stash list`

```shell
$ git stash apply stash@{stash_number}
```

##### Remove the last set of stashed changes:
```
$ git stash drop
```

<hr>

## Search

##### A text search on all files in the directory:
```
$ git grep "Hello"
```

##### In any version of a text search:
```
$ git grep "Hello" v2.5
```

<hr>

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
