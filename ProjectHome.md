<img src='http://textroom.sourceforge.net/images/textroom.png' border='0' width='200' height='200'>

<h1>What is TextRoom?</h1>

<b>TextRoom</b> is a room of your own. Read <a href='http://www.gnu.org/licenses/gpl-3.0.txt'>GPLv3</a>

It is a free (as in freedom and free beer) full screen text editor developed with especially writers in mind.<br>
<br>
TextRoom and all other similar editors share one goal: to get you writing right away by providing distraction free environment to your liking, as well as familiar set of keyboard shortcuts to control its behavior. If you don't feel comfortable already with your editor of choice, you may find it useful.<br>
<br>
Works on Windows, Ubuntu, Fedora and other Linux distributions.<br>
Has been ported to FreeBSD, thanks to Michael James Brune.<br>
Works on Mac OS X thanks to Norberto Lopes. Silent version was reported to compile on OS/2 with a little tweak.<br>
<br>
If you are on a system with only Qt, you can try Silent Version.<br>
<br>
<b>Press F1 to see a list of commands in TextRoom.</b>

<a href='http://www.softworld.com/windows/business-office-software/text-document-editors/textroom/' title='TextRoom 0.8.2'><img src='http://www.softworld.com/skins/red/images/button1.gif' /></a>

<hr />

<h1>Awards</h1>

<table border='0'>
<tr>
<td>
<a href='http://www.softsea.com/review/TextRoom.html'><img src='http://www.softsea.com/images/awards_5stars.png' /></a>
</td>
<td>
<a href='http://www.softpedia.com/progClean/TextRoom-Clean-138392.html'><img src='http://s1.softpedia-static.com/base_img/softpedia_free_award_f.gif' /></a>
</td>
<td>
<a href='http://www.soft82.com/'><img src='http://www.soft82.com/images/awards/soft82_award_88x88.gif' /></a>
</td>
</tr>
<tr>
<td>
<a href='http://wareseeker.com/'>
<img src='http://image.wareseeker.com/images_icon/editor_pick.gif' /></a>
</td>
<td>
<a href='http://www.geardownload.com/system/textroom.html'>
<img src='http://www.geardownload.com/images/5stars.gif' /></a>
</td>
</tr>
<tr><td>
<a href='http://textroom.mac.informer.com'><img src='http://img.informer.com/images/mac/logo_mac.png' /></a>
</td></tr>
</table>

<hr />

<h1>Features</h1>

<h2>Version 0.8.2</h2>

<ul><li>Export your documents to Google Docs<br>
</li><li>MiniFlo mindmapper based on <a href='http://trac.geiseri.com/wiki/FloMain'>Flo</a> by Ian Reinhart Geiser.<br>
</li><li>GetAWord Random Word Generator for creative writers using a word list from <a href='http://www.mieliestronk.com/wordlist.html'>here</a>.<br>
</li><li>MusicRoom, very basic music player. (Can't play mp3, but you are good with ogg.)<br>
</li><li>basic rich text editing: bold, italic, and changing font, font size and color<br>
</li><li>RTL support.<br>
</li><li>Open Office Writer Document (odt) export.<br>
</li><li>Insert images to your documents.<br>
</li><li>Adjustable Tab stop width and paragraph spacing.<br>
</li><li>Text alignment (Right, Left, Centered and Justified).<br>
</li><li>configurable statusbar colors and fonts<br>
</li><li>configurable editor width and height<br>
</li><li>configurable behavior: full-screen on/off, auto save, flow mode (disable delete and backspace keys), load last document on startup, remember position in text for the last file<br>
</li><li>insert current time and/or date in a configurable fashion<br>
</li><li>live word count for all text and selected text<br>
</li><li>live character count option<br>
</li><li>configurable page count option<br>
</li><li>live clock on statusbar<br>
</li><li>targets: setting deadline from a graphical calendar<br>
</li><li>targets: setting a target word count<br>
</li><li>targets: setting short deadlines to write in minutes<br>
</li><li>keyboard shortcuts for the most common tasks (if you start the program for the first time, just press F1 for help)<br>
</li><li>typing sounds similar to a typewriter which can be disabled<br>
</li><li>cross-platform, TextRoom has a Windows installer now and it's possible to compile on Mac too.<br>
</li><li>Spellcheck with hunspell. Now TextRoom checks for the installed hunspell dictionaries, and uses them.<br>
</li><li>Universal Linux installer.<br>
</li><li>Printing support.<br>
</li><li>Background images.<br>
</li><li>Transparent statusbar.<br>
</li><li>File association with .txr files.<br>
</li><li>Restoring all settings to defaults.<br>
</li><li>Plain text only or rich text options.<br>
</li><li>Scratchpad.<br>
</li><li>Line indent (Shift+Enter ignores Indent).</li></ul>

Note about MusicRoom:  It uses SDL_mixer to play ogg files. I use mplayer instead in my own version of TextRoom. I just didn't want much deps, and giving mplayer with Windows binaries would dramatically increase file size.<br>
<br>
Note: Silent version doesn't include typing sounds and spell check.<br>
<br>
<hr />

<h1>Requirements</h1>

To run the Linux portable or to install from a Linux Package or Installer you will need the following installed:<br>
<br>
<ul><li>Qt4.7(or later)<br>
</li><li>Qt4.7 opengl, svg and xml libraries.<br>
</li><li>SDL 1.2.14 (or later)<br>
</li><li>SDL-mixer 1.2.8 (or later)<br>
</li><li>Hunspell 1.2.8 (or later)<br>
</li><li>libxml++<br>
</li><li>glibmm<br>
</li><li>libcurl3</li></ul>

To compile from source, you will also need the development libraries (packages usually include "-dev" or "-devel" in the name) as well.<br>
<br>
Note: For compiling the silent version, you will only need Qt libraries.<br>
<br>
On Windows and Mac OS X, the application comes with the necessary libraries. So you don't have to install anything additional.<br>
<br>
<hr />

<h1>Installation</h1>

<h2>From Linux Source:</h2>
After downloading the source code, open up a terminal, cd to the directory which contains the downloaded file and to uncompress, type:<br>
<br>
<pre><code>tar -xzvf ./textroom-xxx.tar.gz <br>
</code></pre>

xxx is the version number <b>(e.g. textroom-0.6.1.tar.gz)</b>. Then cd to the created directory:<br>
<br>
<pre><code>cd ./textroom-xxx <br>
</code></pre>

If you'd like to checkout the svn instead:<br>
<br>
<pre><code>svn checkout http://textroom.googlecode.com/svn/trunk/ textroom-read-only<br>
cd ./textroom-read-only<br>
</code></pre>

And execute the following in order:<br>
<br>
<pre><code>qmake<br>
make<br>
sudo make install<br>
make clean<br>
</code></pre>

You can start TextRoom by clicking on the menu entry or typing<br>
<br>
<pre><code>textroom<br>
</code></pre>

<h2>On Windows, Ubuntu and Fedora</h2>

Double click the installer and follow the instructions.<br>
<br>
<b>On Windows</b>, removed file associations because of some bugs. TextRoom not reading the options first time the dialog accepted is a known bug, but I couldn't find a workaround yet. It is strongly recommended that you uninstall the previous version first. You can install additional hunspell dictionaries by putting the .aff and .dic files into the application folder.<br>
<br>
<b>On 64bit Ubuntu</b>, try PauloRcCanuto's suggestion, if you can't get TextRoom to work. getlibs might work for any 64bit disto also:<br>
<br>
1. Download the .deb package for i386. Install it using:<br>
<pre><code>   sudo dpkg -i --force-architecture /path/to/package.deb<br>
</code></pre>

2. install getlibs:<br>
<pre><code>   http://explore-ubuntu.blogspot.com/2010/04/getlibs.html<br>
</code></pre>

3. install libhunspell with getlibs:<br>
<pre><code>   getlibs -l libhunspell-1.2.so.0<br>
</code></pre>

Also, Ubuntu Precise, Quantal and Raring users can use the ppa by otto-kesselgulasch to install TextRoom. Thanks Otto!<br>
<br>
<pre><code>deb http://ppa.launchpad.net/otto-kesselgulasch/misc/ubuntu YOUR_UBUNTU_VERSION_HERE main <br>
</code></pre>

<pre><code>sudo apt-get install textroom<br>
</code></pre>

<h2>On Mac OS X</h2>

Mount the disk image (textroom-xxx.dmg, xxx being the version number), and drag the app bundle to the Applications folder.<br>
<br>
<h2>On FreeBSD</h2>

To install the port:<br>
<pre><code>cd /usr/ports/editors/textroom/ &amp;&amp; make install clean<br>
</code></pre>

To add the package:<br>
<pre><code>pkg_add -r textroom<br>
</code></pre>

<hr />

<h1>Uninstallation</h1>

<h2>If you've installed from Linux source</h2>

<pre><code>textroom-uninstall<br>
</code></pre>

<h2>On Ubuntu</h2>

<pre><code>sudo apt-get remove textroom<br>
</code></pre>

<h2>On Fedora</h2>

<pre><code>su<br>
rpm -e textroom<br>
</code></pre>

<h2>On Windows</h2>

Use Add/Remove programs feature or select "Uninstall TextRoom" from the menu.<br>
<br>
<h2>On Mac OS X</h2>

Drag the app in Applications folder to the Trash.<br>
<br>
<h2>On FreeBSD</h2>

To uninstall the port<br>
<pre><code>cd /usr/ports/editors/textroom<br>
make deinstall<br>
</code></pre>

To uninstall the package<br>
<pre><code>pkg_delete textroom<br>
</code></pre>

<hr />

<h1>Screenshots</h1>

<h2>v. 0.7.1 on Ubuntu</h2>

<img src='http://textroom.sourceforge.net/images/textroom-silent-screen-help.png' border='0' width='512' height='300' />

<h2>ODT export sample</h2>
<h3>In TextRoom</h3>

<img src='http://textroom.sourceforge.net/images/odtexport1.png' border='0' width='512' height='300' />

<h3>In OpenOffice Writer</h3>

<img src='http://textroom.sourceforge.net/images/odtexport2.png' border='0' width='512' height='300' />

<h2>v. 0.8 on Ubuntu - MiniFlo</h2>

<img src='http://textroom.sourceforge.net/images/textroom-extended-screen-1.png' border='0' width='512' height='300' />

<img src='http://textroom.sourceforge.net/images/textroom-extended-screen-2.png' border='0' width='512' height='300' />

<img src='http://textroom.sourceforge.net/images/textroom-extended-screen-3.png' border='0' width='512' height='300' />

<h2>v 0.8 on Ubuntu - GetAWord</h2>

<img src='http://textroom.sourceforge.net/images/textroom-extended-getaword-screen.png' border='0' width='512' height='300' />

<h1>Wishlist</h1>

<h3>What Is This?</h3>

This isn't a roadmap. Just my notes and wishes about TextRoom. I will try to update this list frequently, if I can.<br>
<br>
This list was created on 4.16.2010.<br>
<br>
<blockquote><u><b>Underlined Bold</b></u> indicates that I'm <b>working on</b> the entry.</blockquote>

<blockquote><b>Bold</b> indicates that I'm <b>exploring the feasibility</b> of the entry.</blockquote>

<blockquote><del>Strikeout</del> indicates that the entries are <b>completed or given up</b>.</blockquote>

<hr />

<h3>By Priority</h3>

<h4>High</h4>

<ul><li><del>Add spellcheck. (Since we are no more developing for Windows, for now at least.) Aspell? Added aspell, but it marks many right words as misspelled. Why? I have to work on it more. Update: Aspell doesn't work as expected.</del>
</li><li><del>Correct the spell check bugs. (Migrate to another spellchecking library?) Done 0n 4.20.2010. Switched to hunspell and fixed some bugs. It works fine now. Currently just for American English. In 0.6.3</del>
</li><li><del>Add Turkish spelling. Done on 4.20.2010. Found a Turkish dic file for hunspell. Will be available in 0.6.4</del>
</li><li><del>Correct the background image bug. Done on 19.4.2010. Will be available in 0.6.3.</del>
</li><li><del>Add file associations for Gnome, KDE and XFCE at least. (A universal solution would be great.) Done on 4.18.2010 with xdg-mime.</del>
</li><li><del>Make a universal Linux installer with dependency check and uninstaller. (A Bash script of course.) Done on 4.20.2010 for 0.6.3. Buggy?</del>
</li><li><del>Add an auto-detection for installed dictionaries. It's a bit tricky. Done on 1.8.2011. Coming with 0.7</del>
</li><li><del>Add RTL support. Done on 1.8.2011. Coming in 0.7</del>
</li><li><del>Fix Windows shortcuts. If I can compile 0.7 on Windows, I'm going to fix them. Given up on 1.12.2011. It was a WorkingDir issue. Removed file associations.</del></li></ul>

<hr />

<h4>Medium</h4>

<ul><li><del>Add line indent feature back. (Find a less resource hungry method.) Done on 5.10.2010  for 0.6.4</del>
</li><li><del>Make a .txr format with information about files. (Compressed with a properties.xml file? Similar to .odt? CSS? More dependencies?) No, compression brings dependencies. I can put the file information into html as xml instead. Given up on 5.10.2010.</del>
</li><li><del>The above means, add file-specific settings. Given up on 5.10.2010</del>
</li><li><del>Notes feature. Notes may be saved in txr files. Given up on 5.10.2010. Scratcpad does the job for now.</del>
</li><li><del>Scratchpad feature. Done on 5.8.2010 for 0.6.4.</del>
</li><li><del>Add a PDF export feature using</del><a href='http://code.google.com/p/wkhtmltopdf/'>wkhtmltopdf</a>. No, not a very good idea, because wkhtmltopdf uses X. Given up on 5.24.2010.<del><br>
</li><li></del>Add alignment. Done on 1.8.2011. Coming in 0.7<del><br>
</li><li></del>Add .odt export. Basic odt export is in svn. Is now tested. Done on 1.13.2011. Came with 0.7.1<del><br>
</li><li></del>Add CLI options. Does Qt have a parser for CLI? Given up on 1.15.2011. It'd be hard work and I don't see it as really necessary.<del><br>
</li><li></del>Add hyperlink support. I've tested a hyperlink feature, and TextRoom crashed constantly. Is it really necessary? I don't think so. Given up on 1.15.2011.<del><br>
</li><li>Add line spacing. Qt doesn't support this feature yet.<br>
</li><li></del>Inserting text outline from MiniFlo into TextRoom. It shouldn't be so hard. QSettings or another file? Given up on 1.22.2011.<del><br>
</li><li></del>Inserting random word from GetAWord into TextRoom. Given up on 1.22.2011<del></li></ul></del>

<hr />

<h4>Low</h4>

<ul><li><del>Add cursor settings. I don't think so. There are more important things for TextRoom.</del>
</li><li><del>Add restoring to defaults feature. (QSettings just behave oddly.) Done on 4.18.2010.</del>
</li><li><del>Add RTF support? (An html2rtf script? C++ code? Get from word processors? More dependencies?) Given up on 4.17.2010. Anyway, all word processors can deal with html. Why bother with file formats when we have a highly compatible format already? This brings giving up printing too.</del>
</li><li><del>Add line and paragraph spacing? (Outside Qt? More dependencies? Stylesheets?) QTextEdit doesn't support this.</del>
</li><li><del>Add printing support with formatting options. (PDF export? More dependencies?) Given up on 4.17.2010. implemented on 4.18.2010. Added printing support. Actually it was a breeze with Qt. I still don't know what it is good for, but it's there.</del>
</li><li><del>Add link support. No, I don't think it's necessary although easy to add.</del>
</li><li><del>Add image support? (Put the images in compressed .txr?) same as above.</del>
</li><li><del>Add Plain Text Only option. Added on 4.18.2010</del>
</li><li><del>Make new About Screen. Done on 4.18.2010. Some shortcuts are changed.</del>
</li><li><del>Implement color themes. Given up on 1.15.2011. I don't think it's really necessary. Anyone can create his own theme.</del></li></ul>

<hr />

<h4>Optional</h4>

<ul><li><del>Add encryption support. (More dependencies for sure.) Given up on 1.15.2011. I don't see why I should do it.</del>
</li><li><del>Add a project manager. Given up on 1.15.2011. It will only bloat the software.</del>
</li><li><del>Add ability to edit multiple documents. It requires a major rewrite, but I'm gonna try. Given up on 1.22.2011. Huge work.</del></li></ul>

<hr />

<h4>Fancy</h4>

<ul><li><del>Make a proprietary version? (Nah, I don't think so, but I wish. It's possible by the way, Qt and SDL are LGPL.)</del>
</li><li><del>Add installing and using different sound files feature. (Sound file packages could be separately downloaded.) Given up on this on 19.4.2010. It's just useless work.</del>
</li><li><del>Add a background picture feature. (Possible in Qt? I guess.) Implemented on 4.18.2010 in v0.6.2.</del>