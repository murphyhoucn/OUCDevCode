# 想法

## 常见网页种类

1.资讯门户类网站

提供资讯为主要目的
包含信息量大
功能简单：搜索，论坛，留言等
有效宽度1000左右
开发考虑因素
承载信息类型
信息发布的方式和流程
信息量的数量级
例如：`新浪`，`搜狐`，`新华网`等

2.企业品牌类网站

展示实力，体现企业文化，经营理念和产品创意；对美工要求比较高，网站利用多媒体交互技术（视频），动态网页（JS+JQ）技术，针对目标客户进行内容建设，达到品牌营销传播的目的
   分类
企业形象网站
品牌形象网站
产品形象网站

3.交易类网站

以订单为中心，交易对象可以是企业（B2B），也可以是消费者(B2C)。基本包括三项内容：
商品如何展示
订单如何生成
订单如何执行
因此，该类网站一般要有，产品管理、订购管理、订单管理产品推荐、支付管理、收费管理、送发货管理。会员管理等基本系统功能。功能复杂一点的,可能还需要积分管理系统,VIP管理系统,CRM管理系统,MIS管理系统,ERP管理系统,商品销售分析系统等。
分类
B2C: 购物网站，如`京东`，`天猫`
B2B：商务网站，如`阿里巴巴`
C2C：例如：拍卖网站，`闲鱼`，`拍拍`

4.社区网站

`天涯`，`猫扑`

5.办公及政府机构网站

1.企业办公事务类网站，
例如企业办公事务管理系统，人力资源管理系统，办公成本管理系统和网站管理系统
2.政府办公类网站
利用外部政务网与内部局域办公网络而运行。其基本功能有：提供多数据源接口，实现业务系统的数据整合；同一用户管理，提供方便有效的访问权限和管理权限体系。灵活设立子网站。实现复杂的信息发布管理流程。网站面向社会大众。即可提供办事指南，政策法规动态信息等。也可提供网上行政业务申报办理相关数据查询。例如，北京税务局网站，工商局网站。

6.互动游戏网站

如贪玩游戏，`17173`

7.有偿资讯类网站

这一类网站和资讯类网站很相似，也是以提供资讯为主。所不同的在于其提供的资讯要求直接有偿回报，这类网站的业务模型：一般要求访问者或按次、按时间、按量付费，例如`百度知道`、`知乎`等。

8.功能性网站

对网站的主要特征是将一个具有广泛需求的功能扩展开来。开发一套强大的支撑体系。将该功能的实现推向极致。看似简单的页面。却往往投入惊人，效益可观。例如搜索引擎，`谷歌`，`百度`。

9.综合类网站

前八种网站部分功能或全部功能的集合

## 根据需求确定网页种类

- 需求

```markdown
1. 信息展示
2. 网页整合
3. 网页美观
4. 有中国海洋大学元素
```

- 方向

``` markdown
1. 需要一个封面展示课程信息和小组信息。
2. 需要一个导航栏来实现页面快速定位。
3. 导航栏需要有拓展性。
4. 页面可将课程任务分成多个项目，每个项目又可分为多个单元项目，每个单元项目独立页面，互不干扰。
5. 由于单元项目过多，网站结构过于复杂，考虑一种方法能够实现页面整合。
```




# 过程

## Flask框架搭建网站项目平台

``` markdown
1. 使用PyCharm建立项目
2. 建立所需的文件
3. 确定网站运行逻辑
```

## 使用HTML+CSS+JS完成网页主体部分构建

- 网站结构

``` markdown
PS D:\NoteSystem\DiscipineSystem\pythonProject\flaskProject01> tree
卷 DATA 的文件夹 PATH 列表
卷序列号为 90FF-156C
D:.
├─.idea
│  └─inspectionProfiles
├─static
│  ├─bootstrap-3.4.1-dist
│  │  ├─css
│  │  ├─fonts
│  │  └─js
│  └─indexSource
│      ├─content_resource
│      │  └─word
│      ├─fenxi
│      ├─pachong
│      ├─qianduan
│      ├─resource
│      │  ├─editor
│      │  │  ├─css
│      │  │  ├─docs
│      │  │  │  ├─fonts
│      │  │  │  ├─scripts
│      │  │  │  │  └─prettify
│      │  │  │  └─styles
│      │  │  ├─examples
│      │  │  │  ├─css
│      │  │  │  ├─images
│      │  │  │  ├─js
│      │  │  │  └─php
│      │  │  ├─fonts
│      │  │  ├─images
│      │  │  │  └─logos
│      │  │  ├─languages
│      │  │  ├─lib
│      │  │  │  └─codemirror
│      │  │  │      ├─addon
│      │  │  │      │  ├─comment
│      │  │  │      │  ├─dialog
│      │  │  │      │  ├─display
│      │  │  │      │  ├─edit
│      │  │  │      │  ├─fold
│      │  │  │      │  ├─hint
│      │  │  │      │  ├─lint
│      │  │  │      │  ├─merge
│      │  │  │      │  ├─mode
│      │  │  │      │  ├─runmode
│      │  │  │      │  ├─scroll
│      │  │  │      │  ├─search
│      │  │  │      │  ├─selection
│      │  │  │      │  ├─tern
│      │  │  │      │  └─wrap
│      │  │  │      ├─lib
│      │  │  │      ├─mode
│      │  │  │      │  ├─apl
│      │  │  │      │  ├─asterisk
│      │  │  │      │  ├─clike
│      │  │  │      │  ├─clojure
│      │  │  │      │  ├─cobol
│      │  │  │      │  ├─coffeescript
│      │  │  │      │  ├─commonlisp
│      │  │  │      │  ├─css
│      │  │  │      │  ├─cypher
│      │  │  │      │  ├─d
│      │  │  │      │  ├─dart
│      │  │  │      │  ├─diff
│      │  │  │      │  ├─django
│      │  │  │      │  ├─dockerfile
│      │  │  │      │  ├─dtd
│      │  │  │      │  ├─dylan
│      │  │  │      │  ├─ebnf
│      │  │  │      │  ├─ecl
│      │  │  │      │  ├─eiffel
│      │  │  │      │  ├─erlang
│      │  │  │      │  ├─forth
│      │  │  │      │  ├─fortran
│      │  │  │      │  ├─gas
│      │  │  │      │  ├─gfm
│      │  │  │      │  ├─gherkin
│      │  │  │      │  ├─go
│      │  │  │      │  ├─groovy
│      │  │  │      │  ├─haml
│      │  │  │      │  ├─haskell
│      │  │  │      │  ├─haxe
│      │  │  │      │  ├─htmlembedded
│      │  │  │      │  ├─htmlmixed
│      │  │  │      │  ├─http
│      │  │  │      │  ├─idl
│      │  │  │      │  ├─jade
│      │  │  │      │  ├─javascript
│      │  │  │      │  ├─jinja2
│      │  │  │      │  ├─julia
│      │  │  │      │  ├─kotlin
│      │  │  │      │  ├─livescript
│      │  │  │      │  ├─lua
│      │  │  │      │  ├─markdown
│      │  │  │      │  ├─mirc
│      │  │  │      │  ├─mllike
│      │  │  │      │  ├─modelica
│      │  │  │      │  ├─nginx
│      │  │  │      │  ├─ntriples
│      │  │  │      │  ├─octave
│      │  │  │      │  ├─pascal
│      │  │  │      │  ├─pegjs
│      │  │  │      │  ├─perl
│      │  │  │      │  ├─php
│      │  │  │      │  ├─pig
│      │  │  │      │  ├─properties
│      │  │  │      │  ├─puppet
│      │  │  │      │  ├─python
│      │  │  │      │  ├─q
│      │  │  │      │  ├─r
│      │  │  │      │  ├─rpm
│      │  │  │      │  │  └─changes
│      │  │  │      │  ├─rst
│      │  │  │      │  ├─ruby
│      │  │  │      │  ├─rust
│      │  │  │      │  ├─sass
│      │  │  │      │  ├─scheme
│      │  │  │      │  ├─shell
│      │  │  │      │  ├─sieve
│      │  │  │      │  ├─slim
│      │  │  │      │  ├─smalltalk
│      │  │  │      │  ├─smarty
│      │  │  │      │  ├─smartymixed
│      │  │  │      │  ├─solr
│      │  │  │      │  ├─soy
│      │  │  │      │  ├─sparql
│      │  │  │      │  ├─spreadsheet
│      │  │  │      │  ├─sql
│      │  │  │      │  ├─stex
│      │  │  │      │  ├─stylus
│      │  │  │      │  ├─tcl
│      │  │  │      │  ├─textile
│      │  │  │      │  ├─tiddlywiki
│      │  │  │      │  ├─tiki
│      │  │  │      │  ├─toml
│      │  │  │      │  ├─tornado
│      │  │  │      │  ├─turtle
│      │  │  │      │  ├─vb
│      │  │  │      │  ├─vbscript
│      │  │  │      │  ├─velocity
│      │  │  │      │  ├─verilog
│      │  │  │      │  ├─xml
│      │  │  │      │  ├─xquery
│      │  │  │      │  ├─yaml
│      │  │  │      │  └─z80
│      │  │  │      └─theme
│      │  │  ├─plugins
│      │  │  │  ├─code-block-dialog
│      │  │  │  ├─emoji-dialog
│      │  │  │  ├─goto-line-dialog
│      │  │  │  ├─help-dialog
│      │  │  │  ├─html-entities-dialog
│      │  │  │  ├─image-dialog
│      │  │  │  ├─link-dialog
│      │  │  │  ├─preformatted-text-dialog
│      │  │  │  ├─reference-link-dialog
│      │  │  │  ├─table-dialog
│      │  │  │  └─test-plugin
│      │  │  ├─scss
│      │  │  │  └─lib
│      │  │  ├─src
│      │  │  └─tests
│      │  │      ├─css
│      │  │      ├─js
│      │  │      └─qunit
│      │  ├─font-awesome
│      │  │  ├─css
│      │  │  ├─fonts
│      │  │  ├─less
│      │  │  └─scss
│      │  └─image
│      └─zongjie
├─templates
├─venv
│  ├─Lib
│  │  └─site-packages
│  │      ├─click
│  │      │  └─__pycache__
│  │      ├─click-8.1.3.dist-info
│  │      ├─colorama
│  │      │  └─__pycache__
│  │      ├─colorama-0.4.5.dist-info
│  │      ├─flask
│  │      │  ├─json
│  │      │  │  └─__pycache__
│  │      │  └─__pycache__
│  │      ├─Flask-2.2.2.dist-info
│  │      ├─importlib_metadata
│  │      │  └─__pycache__
│  │      ├─importlib_metadata-4.12.0.dist-info
│  │      ├─itsdangerous
│  │      │  └─__pycache__
│  │      ├─itsdangerous-2.1.2.dist-info
│  │      ├─jinja2
│  │      │  └─__pycache__
│  │      ├─Jinja2-3.1.2.dist-info
│  │      ├─markupsafe
│  │      │  └─__pycache__
│  │      ├─MarkupSafe-2.1.1.dist-info
│  │      ├─pip
│  │      │  ├─_internal
│  │      │  │  ├─cli
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─commands
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─distributions
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─index
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─locations
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─metadata
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─models
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─network
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─operations
│  │      │  │  │  ├─build
│  │      │  │  │  │  └─__pycache__
│  │      │  │  │  ├─install
│  │      │  │  │  │  └─__pycache__
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─req
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─resolution
│  │      │  │  │  ├─legacy
│  │      │  │  │  ├─resolvelib
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─utils
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─vcs
│  │      │  │  │  └─__pycache__
│  │      │  │  └─__pycache__
│  │      │  ├─_vendor
│  │      │  │  ├─cachecontrol
│  │      │  │  │  ├─caches
│  │      │  │  │  │  └─__pycache__
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─certifi
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─chardet
│  │      │  │  │  ├─cli
│  │      │  │  │  ├─metadata
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─colorama
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─distlib
│  │      │  │  │  ├─_backport
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─html5lib
│  │      │  │  │  ├─filters
│  │      │  │  │  ├─treeadapters
│  │      │  │  │  ├─treebuilders
│  │      │  │  │  │  └─__pycache__
│  │      │  │  │  ├─treewalkers
│  │      │  │  │  │  └─__pycache__
│  │      │  │  │  ├─_trie
│  │      │  │  │  │  └─__pycache__
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─idna
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─msgpack
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─packaging
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─pep517
│  │      │  │  │  ├─in_process
│  │      │  │  │  │  └─__pycache__
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─pkg_resources
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─platformdirs
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─progress
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─requests
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─resolvelib
│  │      │  │  │  └─compat
│  │      │  │  ├─tenacity
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─tomli
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─urllib3
│  │      │  │  │  ├─contrib
│  │      │  │  │  │  ├─_securetransport
│  │      │  │  │  │  └─__pycache__
│  │      │  │  │  ├─packages
│  │      │  │  │  │  ├─backports
│  │      │  │  │  │  ├─ssl_match_hostname
│  │      │  │  │  │  │  └─__pycache__
│  │      │  │  │  │  └─__pycache__
│  │      │  │  │  ├─util
│  │      │  │  │  │  └─__pycache__
│  │      │  │  │  └─__pycache__
│  │      │  │  ├─webencodings
│  │      │  │  │  └─__pycache__
│  │      │  │  └─__pycache__
│  │      │  └─__pycache__
│  │      ├─pip-21.3.1.dist-info
│  │      ├─pkg_resources
│  │      │  ├─extern
│  │      │  │  └─__pycache__
│  │      │  ├─tests
│  │      │  │  └─data
│  │      │  │      └─my-test-package-source
│  │      │  ├─_vendor
│  │      │  │  ├─packaging
│  │      │  │  │  └─__pycache__
│  │      │  │  └─__pycache__
│  │      │  └─__pycache__
│  │      ├─setuptools
│  │      │  ├─command
│  │      │  ├─extern
│  │      │  ├─_distutils
│  │      │  │  └─command
│  │      │  └─_vendor
│  │      │      ├─more_itertools
│  │      │      └─packaging
│  │      ├─setuptools-60.2.0.dist-info
│  │      ├─werkzeug
│  │      │  ├─debug
│  │      │  │  ├─shared
│  │      │  │  └─__pycache__
│  │      │  ├─middleware
│  │      │  │  └─__pycache__
│  │      │  ├─routing
│  │      │  │  └─__pycache__
│  │      │  ├─sansio
│  │      │  │  └─__pycache__
│  │      │  ├─wrappers
│  │      │  │  └─__pycache__
│  │      │  └─__pycache__
│  │      ├─Werkzeug-2.2.2.dist-info
│  │      ├─wheel
│  │      │  ├─cli
│  │      │  └─vendored
│  │      │      └─packaging
│  │      ├─wheel-0.37.1.dist-info
│  │      ├─zipp-3.8.1.dist-info
│  │      ├─_distutils_hack
│  │      │  └─__pycache__
│  │      └─__pycache__
│  └─Scripts
└─__pycache__
```



## 网站构建过程

``` markdown
1. 使用HTML确定网站需要展示的内容。
2. 使用CSS对网页进行美化。
3. 网页构建过程中，使用Js较少。
4. 使用开源网页项目[Editor.md](https://pandao.github.io/editor.md/en.html)，实现网站对markdown文件的调用与渲染。
5. 使用HTMl的 <iframe> 标签用来定义一个内联框架，使用它可以将另一个网页嵌入到当前网页中。
6. 检查分析网页bug，并对网页进行最后检查，确定网页最终版本。
```

