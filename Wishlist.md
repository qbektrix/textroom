### What Is This? ###

This isn't a roadmap, because I suck at following roadmaps. Just my notes and wishes about TextRoom. I will try to update this page frequently, if I can. If you have any wishes or feature requests for TextRoom, just leave a comment.

This page was created on 4.16.2010.

> <u><b>Underlined Bold</b></u> indicates that I'm **working on** the entry.

> <b>Bold</b> indicates that I'm **exploring the feasibility** of the entry.

> ~~Strikeout~~ indicates that the entries are **completed or given up**.


---


### By Priority ###

#### High ####

  * ~~Add spellcheck. (Since we are no more developing for Windows, for now at least.) Aspell? Added aspell, but it marks many right words as misspelled. Why? I have to work on it more. Update: Aspell doesn't work as expected.~~
  * ~~Correct the spell check bugs. (Migrate to another spellchecking library?) Done 0n 4.20.2010. Switched to hunspell and fixed some bugs. It works fine now. Currently just for American English. In 0.6.3~~
  * ~~Add Turkish spelling. Done on 4.20.2010. Found a Turkish dic file for hunspell. Will be available in 0.6.4~~
  * Add a auto-detecting installed dictionaries and adding them to the list feature. It's a bit tricky.
  * ~~Correct the background image bug. Done on 19.4.2010. Will be available in 0.6.3.~~
  * ~~Add file associations for Gnome, KDE and XFCE at least. (A universal solution would be great.) Done on 4.18.2010 with xdg-mime.~~
  * ~~Make a universal Linux installer with dependency check and uninstaller. (A Bash script of course.) Done on 4.20.2010 for 0.6.3. Buggy?~~


---


#### Medium ####

  * ~~Add line indent feature back. (Find a less resource hungry method.) Done on 5.10.2010  for 0.6.4~~
  * ~~Make a .txr format with information about files. (Compressed with a properties.xml file? Similar to .odt? CSS? More dependencies?) No, compression brings dependencies. I can put the file information into html as xml instead. Given up on 5.10.2010.~~
  * ~~The above means, add file-specific settings. Given up on 5.10.2010~~
  * ~~Notes feature. Notes may be saved in txr files. Given up on 5.10.2010. Scratcpad does the job for now.~~
  * ~~Scratchpad feature. Done on 5.8.2010 for 0.6.4.~~
  * ~~Add a PDF export feature using~~<a href='http://code.google.com/p/wkhtmltopdf/'>wkhtmltopdf</a>. No, not a very good idea, because wkhtmltopdf uses X. Given up on 5.24.2010.~~---~~

#### Low ####

  * ~~Add cursor settings. I don't think so. There are more important things for TextRoom.~~
  * ~~Add restoring to defaults feature. (QSettings just behave oddly.) Done on 4.18.2010.~~
  * ~~Add RTF support? (An html2rtf script? C++ code? Get from word processors? More dependencies?) Given up on 4.17.2010. Anyway, all word processors can deal with html. Why bother with file formats when we have a highly compatible format already? This brings giving up printing too.~~
  * ~~Add line and paragraph spacing? (Outside Qt? More dependencies? Stylesheets?) QTextEdit doesn't support this.~~
  * ~~Add printing support with formatting options. (PDF export? More dependencies?) Given up on 4.17.2010. implemented on 4.18.2010. Added printing support. Actually it was a breeze with Qt. I still don't know what it is good for, but it's there.~~
  * ~~Add link support. No, I don't think it's necessary although easy to add.~~
  * ~~Add image support? (Put the images in compressed .txr?) same as above.~~
  * ~~Add Plain Text Only option. Added on 4.18.2010~~
  * ~~Make new About Screen. Done on 4.18.2010. Some shortcuts are changed.~~


---


#### Optional ####

  * Add a project manager.
  * Add ability to edit multiple documents. (Buffers? Tabbed interface?)
  * Add encryption support. (More dependencies for sure.)


---


#### Fancy ####

  * Make a proprietary version? (Nah, I don't think so, but I wish. It's possible by the way, Qt and SDL are LGPL.)
  * ~~Add installing and using different sound files feature. (Sound file packages could be separately downloaded.) Given up on this on 19.4.2010. It's just useless work.~~
  * ~~Add a background picture feature. (Possible in Qt? I guess.)~~ Implemented on 4.18.2010 in v0.6.2.