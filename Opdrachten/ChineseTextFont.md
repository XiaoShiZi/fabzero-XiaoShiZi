Chinese Text Font 

Xiao Shi Zi Yi 小獅子一

SPI OLED dislay 128x64 
U8G2 Library

Text font set to chinese1, 

No character for  Shi 獅 on the display.

Looking up the unicode for this character by using https://r12a.github.io/app-conversion/
gives us U+7345.







Looking up in the font map of the Chinese1/Chinese2/Chines3 we can't find the 7345 in the list.
https://github.com/olikraus/u8g2/blob/master/tools/font/build/chinese3.map

Now we have to add this character ourselfs into the font or make a new font with those 3 characters in it. Latest will take less memory ocupied.
Vind het juiste bestand en de goede tool om dit op windows te kunnen maken... W... Grrrrr

So lets make our own font consisting of 4 characters. 
5C0F, 7345, 5B50, 4E00

小獅子一

https://www.silabs.com/community/wireless/proprietary/knowledge-base.entry.html/2019/02/14/creating_monochrome-ICUo


30/11/2020 
Checking on how to make a font with only 4 characters in it with u8g2 library
Need more explanation on how to achieve this task.

Thought the help on github contains the necesary info on how to achieve this task.


PFFF.... amai... de master.zip geinstalleerd de u8g2 verwijderd voorbeeld gedaan fout in verwijzing in de .c file. .c wil arduino niet openen... 

We gaan voor de bdfconv tool gaan. Op windows of waarschijnlijker op een Rpi zodat die omzetting correct gebeurd met de aangeleverde tools. 

Nu hebben we een file kunnen maken met de characters 小獅子 erin
Staat onder https://raw.githubusercontent.com/larryli/u8g2_wqy/master/bdf/wenquanyi_13px.bdf


STARTCHAR U_4E00
ENCODING 19968
SWIDTH 1000 0
DWIDTH 14 0
BBX 13 1 0 5
BITMAP
FFF8
ENDCHAR
STARTCHAR U_5C0F
ENCODING 23567
SWIDTH 1000 0
DWIDTH 14 0
BBX 13 13 0 -1
BITMAP
0200
0200
0200
0200
2240
2220
2210
4208
8208
0200
0200
0A00
0400
ENDCHAR
STARTCHAR U_7345
ENCODING 29509
SWIDTH 1000 0
DWIDTH 14 0
BBX 13 13 0 -1
BITMAP
9400
58F8
2E20
6AF8
AAA8
2EA8
28A8
6EA8
AAA8
2AB8
2E20
AA20
4020
ENDCHAR
STARTCHAR U_5B50
ENCODING 23376
SWIDTH 1000 0
DWIDTH 14 0
BBX 13 12 0 -1
BITMAP
7FE0
0080
0100
0200
0200
FFF8
0200
0200
0200
0200
0A00
0400
ENDCHAR

dit is de beschrijving terug te vinden in de bdf file. Hoe nu verder hiermee?


De header is ook noodzakelijk vermoed ik

STARTFONT 2.1
FONT -wenquanyi-wenquanyi bitmap song-medium-r-normal--14-140-75-75-P-80-iso10646-1
COMMENT ========================================================== 
COMMENT                Wen Quan Yi Bitmap Song 
COMMENT ----------------------------------------------------------
COMMENT Summary:
COMMENT 
COMMENT         Authors  : WenQuanYi Contributors
COMMENT         Webpage  : http://wenq.org/en/
COMMENT         Font Name: WenQuanYi Bitmap Song
COMMENT         Version  : 0.9.9.8
COMMENT         Release  : 8
COMMENT         Copyright: (C)2004-2010, WenQuanYi Project 
COMMENT                    Board of Trustees and Qianqian Fang
COMMENT         License  : GPL v2 (with font embedding exception)
COMMENT 
COMMENT           May the Font be with you, forever!
COMMENT ----------------------------------------------------------
COMMENT WenQuanYi bitmap fonts include all 20,932 Unicode 5.2 
COMMENT CJK Unified Ideographs (U4E00 - U9FA5) and 6,582 
COMMENT CJK Extension A characters (U3400 - U4DB5) at 
COMMENT 5 different pixel sizes (9pt-12X12, 10pt-13X13, 
COMMENT 10.5pt-14x14, 11pt-15X15 and 12pt-16x16 pixel).
COMMENT Use of this bitmap font for on-screen display of Chinese 
COMMENT (traditional and simplified) in web pages and elsewhere 
COMMENT eliminates the annoying "blurring" problems caused by 
COMMENT insufficient "hinting" of anti-aliased vector CJK fonts. 
COMMENT In addition, Latin characters, Japanese Kanas and 
COMMENT Korean Hangul glyphs (U+AC00~U+D7A3) are also included.
COMMENT ----------------------------------------------------------
COMMENT WenQuanYi Contributors:
COMMENT 
COMMENT Project Maintainer: Qianqian Fang(fangq<at>nmr.mgh.harvard.edu)
COMMENT 
COMMENT Major contributors: wanghong, tchaikov,ailantian,niqiu,fiag
COMMENT                     caiqian,fundawang
COMMENT Other contributors: activeion,amadeoh,BabyPBC,BenBear,  
COMMENT                     brep,chaoslawful,DannyZeng,farm,fiag,keykeen,
COMMENT                     liyi,lucifer,nilarcs,niqiu,pangwa,pathfinder,
COMMENT                     pinker,PONY,pupilzeng,shhky,stid,wuler.lv,
COMMENT                     xnuxmwx,namespace,leftstand,MarkLam,buick,
COMMENT                     liqian,qinling,Seeker,xiaoma,ZaiJianQingRen,
COMMENT                     SiCengXiangShi,the_owl,whppc,eka,failsafe,
COMMENT                     musiccow,Blueelf,lenovox,udi,leal
COMMENT ----------------------------------------------------------
COMMENT This file: WenQuanYi Bitmap Song 10.5pt(13px) medium
COMMENT Created by Qianqian Fang (fangq<at>nmr.mgh.harvard.edu)
COMMENT ----------------------------------------------------------
SIZE 14 75 75
FONTBOUNDINGBOX 14 15 0 -3
STARTPROPERTIES 21
FONT_ASCENT 12
FONT_DESCENT 3
FONT_NAME "WenQuanYi Bitmap Song"
FAMILY_NAME "WenQuanYi Bitmap Song"
FOUNDRY "WenQuanYi"
FONT_VERSION "000.998"
WEIGHT_NAME "Medium"
SETWIDTH_NAME "Normal"
PIXEL_SIZE 14
POINT_SIZE 140
DEFAULT_CHAR 0
RESOLUTION_X 75
RESOLUTION_Y 75
RESOLUTION 75
SPACING "P"
UNDERLINE_POSITION -2
UNDERLINE_THICKNESS 1
QUAD_WIDTH 14
CHARSET_REGISTRY "ISO10646"
CHARSET_ENCODING "-1"
CHARSET_COLLECTIONS "ASCII ISO8859-5 GB2312.1980 BIG5-0 KSC5601.1989-0 JISX0208.1997 ISO10646-1"
ENDPROPERTIES
CHARS 22852
CHARS 4


Met dan het aantal Chars te plaatsen op 4.

STARTCHAR U_4E00
ENCODING 19968
SWIDTH 1000 0
DWIDTH 14 0
BBX 13 1 0 5
BITMAP
FFF8
ENDCHAR
STARTCHAR U_5C0F
ENCODING 23567
SWIDTH 1000 0
DWIDTH 14 0
BBX 13 13 0 -1
BITMAP
0200
0200
0200
0200
2240
2220
2210
4208
8208
0200
0200
0A00
0400
ENDCHAR
STARTCHAR U_7345
ENCODING 29509
SWIDTH 1000 0
DWIDTH 14 0
BBX 13 13 0 -1
BITMAP
9400
58F8
2E20
6AF8
AAA8
2EA8
28A8
6EA8
AAA8
2AB8
2E20
AA20
4020
ENDCHAR
STARTCHAR U_5B50
ENCODING 23376
SWIDTH 1000 0
DWIDTH 14 0
BBX 13 12 0 -1
BITMAP
7FE0
0080
0100
0200
0200
FFF8
0200
0200
0200
0200
0A00
0400
ENDCHAR

en als afsluiting

ENDFONT
Blijkbaar dien ik enkel de bdf te downloaden en met de bdfconv.exe een bewerking te doen zodat er een bruikbare font aangemaakt word.  
https://github.com/larryli/u8g2_wqy/blob/master/bdf/wenquanyi_13px.bdf
Dit vond ik terug op https://github.com/olikraus/u8g2/blob/master/doc/faq.txt#L233


Stapje dichter door de bdf nog eens verder te bekijken.
https://github.com/larryli/u8g2_wqy/wiki/CustomFont

https://translate.google.com/translate?hl=&sl=zh-CN&tl=nl&u=https%3A%2F%2Fgithub.com%2Flarryli%2Fu8g2_wqy%2Fwiki%2FCustomFont

myFont.map

32-128,
$4E00,
$5B50,
$5C0F,
$7345,


pje dic
bdfconv -f 1 -m "32-128,4E00,5b50,5c0f,7345" -n myfont -o myfont.c wenquanyi_13px.bdf


en de file is aangemaakt. YES!!!

myfont.c


myfont.h 

# ifndef _MYFONT_H
# definieer  _MYFONT_H

# include  < stdint.h > 
# include  < stddef.h >

# ifdef __cplusplus
 extern  " C " {
#stop als

# ifndef U8G2_USE_LARGE_FONTS
# definieer  U8G2_USE_LARGE_FONTS 
# endif

# ifndef U8X8_FONT_SECTION

# ifdef __GNUC__
#   definieer  U8X8_SECTION ( naam ) __attribute__ ((sectie (naam)))
# else 
#   definieer  U8X8_SECTION ( naam )
# endif

# indien gedefinieerd (__ GNUC__) && gedefinieerd (__ AVR__)
#   definieer  U8X8_FONT_SECTION ( naam ) U8X8_SECTION ( " .progmem. " naam)
# endif

# indien gedefinieerd (ESP8266)
#   define  U8X8_FONT_SECTION ( naam ) __attribute __ ((sectie ( " .text. " naam)))
# endif

# ifndef U8X8_FONT_SECTION
#   definieer  U8X8_FONT_SECTION ( naam )
# endif

# endif

# ifndef U8G2_FONT_SECTION
# definieer  U8G2_FONT_SECTION ( naam ) U8X8_FONT_SECTION (naam)
# endif

extern  const  uint8_t myfont [] U8G2_FONT_SECTION ( " myfont " );


# ifdef __cplusplus
}
# endif

#stop als



Dan in de ino #include "myfont.h" 


Errors....

bdfconv -b 0 -f 1 -M myfont.map -n u8g2_font_wqy12_t_myfont -o _u8g2_font_wqy12_t_myfont.c wenquanyi_13px.bdf


_u8g2_font_wqy12_t_myfont.c aangemaakt

bdfconv -b 0 -f 1 -M myfont.map -n u8g2_font_wqy12_t_myfont -o _u8g2_font_wqy12_t_myfont.c wenquanyi_13px.bdf
echo '#include "myfont.h"' > u8g2_font_wqy12_t_myfont.c




2/12/2020

Verder uitzoeken waarom het nog niet vertoont word op het scherm.
Eindelijk de oorzaak gevonden.
De files staan onder het project.
De inhoud is alsvolgt:

copy paste van de bestanden.
myfont.h

#ifndef _MYFONT_H
#define _MYFONT_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef U8G2_USE_LARGE_FONTS
#define U8G2_USE_LARGE_FONTS
#endif

#ifndef U8X8_FONT_SECTION

#ifdef __GNUC__
#  define U8X8_SECTION(name) __attribute__ ((section (name)))
#else
#  define U8X8_SECTION(name)
#endif

#if defined(__GNUC__) && defined(__AVR__)
#  define U8X8_FONT_SECTION(name) U8X8_SECTION(".progmem." name)
#endif

#if defined(ESP8266)
#  define U8X8_FONT_SECTION(name) __attribute__((section(".text." name)))
#endif

#ifndef U8X8_FONT_SECTION
#  define U8X8_FONT_SECTION(name) 
#endif

#endif

#ifndef U8G2_FONT_SECTION
#define U8G2_FONT_SECTION(name) U8X8_FONT_SECTION(name) 
#endif

extern const uint8_t u8g2_font_wqy12_t_myfont[] U8G2_FONT_SECTION("u8g2_font_wqy12_t_myfont");


#ifdef __cplusplus
}
#endif

#endif
//Eind van myfont.h
u8g2_font_wqy12_t_myfont.c
#include "myfont.h"

/*
  Fontname: -wenquanyi-wenquanyi bitmap song-medium-r-normal--14-140-75-75-P-80-iso10646-1
  Copyright: (null)
  Glyphs: 100/22852
  BBX Build Mode: 0
*/
const uint8_t u8g2_font_wqy12_t_myfont[1266] U8G2_FONT_SECTION("u8g2_font_wqy12_t_myfont") = 
  "d\0\3\2\4\4\3\4\5\15\17\0\375\11\375\12\376\1\200\3\10\4p \5\0D\12!\7\261\267"
  "\213C$\42\7\64}\213\310\24#\17\266\274\233\250\227a\211z\31\226\250\27\0$\20\265\275\253l\251"
  "(\231\250%Q\242T\266\10%\21\227D\234P\211\222\266(-eIS\42&\0&\20\227D,\61"
  "\312\242,I+mQ&M\1'\6\61\376\212\1(\13\303\266\253$J\242\336\242,)\14\303\266\213"
  ",\312\242^\242$\2*\16wL\274\60\251M\303\20mI\61\3+\13w\314\273\270\66\14Y\134\3"
  ",\10B\265\212!Q\0-\6\26\344\213\3.\6\42\305\212!/\16\306\264\333b\32\246a\32\246a"
  "\232\2\60\14\226\304\233!\11\375\230\14\11\0\61\11\225D\213\261\237\6\1\62\13\226\304\233!\11\305\276"
  "\16\3\63\16\226\304\233!\11\323\322\234\212\311\220\0\64\17\226\304;-\211\272dI\226\14c\232\0\65"
  "\16\226\304\213C\232\16r\232\212\311\220\0\66\17\226\304\233!\11\325d\321Dc\62$\0\67\13\226\304"
  "\213c\32\246\305\264\6\70\17\226\304\233!\11\215\311\220\204\306dH\0\71\17\226\304\233!\11\215\311\240"
  "\246b\62$\0:\10rN\213!\36\2;\11\222>\213!\36\22\5<\10\266\264\333\260\347\36=\10"
  "F\324\213;:\14>\11\266\264\213\270\307^\1\77\17\246\274\233!\11\305\64\23\323\34L#\0@\31"
  "\251D\255AK\223hR\262D\32\22%K\224,\221\206\244\232\15\22\0A\20\230\304<Y\215\302("
  "\13\243\60\32\226X\16B\15\226\304\213A\11\215\303\22\32\207\5C\13\226\304\253!\11\323\316\361\20D"
  "\15\227D\214A\12\223\324\307d\220\0E\14\226\304\213CZ\35\224\264:\14F\13\226\304\213CZ\35"
  "\224\264\25G\17\227D\254!\12\345\332\220\252I\30\15\2H\12\227D\214\324u\270\272\6I\11\223D"
  "\212%\352\313\0J\10\303,\252\376\323\2K\20\226\304\213PK\242J&&YTK\302\0L\11\226"
  "\304\213\264_\207\1M\17\230\304\14q\10\227(Q\242D\362l\16N\21\227D\14qT\62%\223\42"
  ")\322\22-\21\5O\14\227D\254\255\222zM\262l\2P\14\226\304\213A\11\35\207%\255\2Q\15"
  "\247<\254\255\222zM\262l\7\4R\17\226\304\213A\11\215\303\22\325\222,\11\3S\17\226\304\233!"
  "\11\325x\210S\61\31\22\0T\12\227D\214C\26\367\33\0U\13\227D\214\324\257I\226M\0V\17"
  "\227D\214\324\232dQV\11\223\64\316\0W\32\233D\216\60\24C-\311\222(\211*Y\22%Y\22"
  "%Y\222\245a\32\1X\16\227D\214TM\262JZ\311*\251\32Y\14\227D\214\64\311*i\334\33"
  "\0Z\13\227D\214C\234\366y\30\2[\11\303\276\213!\352\237\6\134\14\245\305\213\60\15\323\60\15\323"
  "\60]\11\303\276\213\251\177\32\2^\10\65\375\253,\251\5_\6\26\274\213\3`\7\63\366\13)\13a"
  "\14v\304\233!N\206\321\230\14\2b\15\246\304\213\264e\321D\343\246,\0c\11uD\233A\354:"
  "\4d\13\246\304\333\226E\33\335\224%e\16v\304\233!\11\305aP\303dH\0f\13\245D\253%"
  "\314\6%\354\15g\15\246\254\233a\364\246,ieH\0h\13\246\304\213\264e\321D\217\1i\10\221"
  "D\211d\30\2j\11\302\254\231,\351\27\5k\16\245D\213\260MJJZ\22U\262\0l\7\241\305"
  "\211\207\0m\20yD\215DR$[\246eZ\246eZ\1n\12v\304\213d\321D\217\1o\14w"
  "D\254\255\222Z\223,\233\0p\15\246\254\213d\321D\343\246,i\25q\13\246\254\233E\33\335\224%"
  "mr\12t\304\212d\210\262n\0s\13uD\233%SW-Y\0t\13\224\304\232,\32\222\254\243"
  "\0u\11v\304\213\320\67e\11v\16wD\214\64\311\242\254\22&i\234\1w\20yD\215,\323*"
  "\235\222\246\244\255\230E\0x\13uD\213LKj\225\232\26y\20\247,\214TM\262(\253\204I\32"
  "\247q\10z\12uD\213A\314:\16\2{\14\323\266\253$\352\22eQ[\0|\6\301\277\213\17}"
  "\14\323\266\213,\352\26%QK\4~\11\65\335\233,\251%\0\200\21\266<;-J\322p\220\302A"
  "J\343(S\0\0\0\0\4\377\377N\0\10\35l\217\17\1[P\33\315<\237\341\220c\71\230\203\71"
  "\32\17\17q\216\346h\216\346X\222\203\71\0\134\17\34\335<\357\34\315\321\34\315\221,J\263b\26F"
  "a\252\226s\64\307\222\34\314\1sE&\335<\217(\311\221D\33\244d\313\224\312\260\364)Y\232\222"
  ",\251(KE\351S\322\62%[\224\264\325\221\10\0";

//Eind van u8g2_font_wqy12_t_myfont.c

In de Arduino code:
ZandKnoper.ino
#include "myfont.h"
…
...
void setup(){
    u8g2.begin();
  u8g2.enableUTF8Print();    // enable UTF8 support for the Arduino print() function
  u8g2.setFont(u8g2_font_wqy12_t_myfont);//myfont);
  u8g2.setDisplayRotation(U8G2_R1);//u8g2.setFlipMode (1);
…
…
//eind ZandKnoper.ino
