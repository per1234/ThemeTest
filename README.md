ThemeTest
==========

Sketches for testing [Arduino](http://arduino.cc) IDE themes. Demonstrates all theme settings. Packaged as a library in order to define all possible keywords.


#### Installation
- Download https://github.com/per1234/ThemeTest/archive/master.zip
- Using Arduino IDE 1.0.x:
  - **Sketch > Import Library... > Add Library... >** select the downloaded file **> Open**
- Using Arduino IDE 1.5+:
  - **Sketch > Include Library > Add ZIP Library... >** select the downloaded file **> Open**


<a id="usage"></a>
#### Usage
The following information was determined using Arduino IDE 1.6.11.
- **File > Examples > ThemeTest > ThemeTest**
  - Buttons
    - `buttons.bgcolor` - Color of the button bar.
    - `buttons.status.font` - Font of text shown to the right of the buttons when you hover over one.
    - `buttons.status.color` - Color of the text shown to the right of the buttons when you hover over one.
    - buttons.png - Test regular, hover, and selected versions.
  - Header
    - `header.bgcolor` - Color behind the tabs.
    - `header.text.selected.color` - Color of the currently selected tab text.
    - `header.text.unselected.color` - Color of the unselected tab text.
    - `header.text.font` - Font of the Header text.
    - Tab graphics files
      - tab-sel-left.png - Left border of the selected tab.
      - tab-sel-mid.png - Body of the selected tab.
      - tab-sel-right.png - Right border of the selected tab.
      - tab-unsel-left.png - Left border of the unselected tab.
      - tab-unsel-mid.png - Body of the unselected tab.
      - tab-unsel-right.png - Right border of the unselected tab.
      - tab-sel-menu.png - Doesn't appear to ever be used currently.
      - tab-unsel-menu.png - Tab menu button.
  - Editor
    - Check editor text contrast when unselected and selected:
      - `editor.fgcolor` - Default editor text color.
      - `editor.bgcolor` - Background color of the editor window.
      - `editor.caret.color` - AKA cursor.
      - `editor.external.bgcolor` - Background color of the editor when **File > Preferences > Use external editor** is checked.
      - `editor.linehighlight.color` - Background color of the current line highlight. This indicates the line the cursor is on(enabled by setting `editor.linehighlight=true`). If enabled, move the cursor to each line of the sketch to check color contrast.
      - `editor.selection.color` - Background color of selected text.
      - `editor.invalid.style` - Doesn't appear to have any effect.
      - `editor.eolmarkers.color` - Line end indicators(enabled by setting `editor.eolmarkers=true`).
      - `editor.brackethighlight.color` - Indicates the matching bracket to the one at the cursor(enabled by setting `editor.brackethighlight=true`).
      - `editor.keyword1.style` - Doesn't appear to have any effect.
      - `editor.data_type.style` - `KEYWORD1` and `DATA_TYPE` keywords in the keywords.txt file of any installed library or {Arduino IDE installation folder}/lib/keywords.txt.
      - `editor.keyword2.style` - Doesn't appear to have any effect.
      - `editor.function.style` - `KEYWORD2`, `KEYWORD3`, and `LITERAL2` keywords in the keywords.txt file of any installed library or {Arduino IDE installation folder}/lib/keywords.txt.
      - `editor.keyword3.style` - Doesn't appear to have any effect.
      - `editor.reserved_word.style` - `RESERVED_WORD` keywords in the keywords.txt file of any installed library or {Arduino IDE installation folder}/lib/keywords.txt.
      - `editor.literal1.style` - Doesn't appear to have any effect.
      - `editor.literal2.style` - Doesn't appear to have any effect.
      - `editor.variable.style` - Doesn't appear to have any effect.
      - `editor.reserved_word_2.style` - `LITERAL1` and `RESERVED_WORD_2` keywords in the keywords.txt file of any installed library or {Arduino IDE installation folder}/lib/keywords.txt.
      - `editor.literal_boolean.style` - Doesn't appear to have any effect.
      - `editor.literal_char.style` - Doesn't appear to have any effect.
      - `editor.literal_string_double_quote.style` - Text surrounded by double quotes.
      - `editor.preprocessor.style` - Preprocessor directives(or `PREPROCESSOR` keywords in the keywords.txt file of any installed library).
      - `editor.url.style` - Doesn't appear to have any effect.
      - `editor.operator.style` - e.g. + - = /
      - `editor.comment1.style` - C++ style comments.
      - `editor.comment2.style` - C style comments.
  - Status bar - Bar between the editor and console.
    - `status.notice.bgcolor` - Background color of the status bar when not in error mode.
    - `status.edit.fgcolor` - Doesn't appear to have any effect.
    - `status.edit.bgcolor` - Doesn't appear to have any effect.
    - `status.font` - Status Bar text font.
  - Line Status bar - Bar at the bottom of the screen that shows the line number, board, and port.
    - `linestatus.color` - Color of the text on the Line Status bar.
    - `linestatus.bgcolor` - Line Status bar background color.
    - `linestatus.font` - Font of the Line Status bar text.
    - `linestatus.height` - Height of the Line Status bar.
- **Sketch > Compile/Verify** to check the error/warning colors.
  - Status bar
    - `status.error.fgcolor` - Text color of the Status Bar in error mode.
    - `status.error.bgcolor` - Background color of the Status Bar in error mode.
  - Console
    - `console.font`/`console.font.macosx`
    - `console.color` - Background color of the console.
    - Check console text color contrast when unselected and selected:
      - `console.output.color` - Console text color for non-error/warning output.
      - `console.error.color` - Console text color for error/warning messages.
- **File > Examples > ThemeTest > SerialPlotter**
- Upload the sketch to your Arduino.
  - Status Bar
    - `status.notice.fgcolor` - Non-error text color on the status bar.
- **Tools > Serial Plotter**
- Select **9600 baud** from the menu in the lower left corner of the Serial Plotter.
  - `plotting.bgcolor` - Bbackground color of the Serial Plotter.
  - `plotting.color` - Doesn't appear to have any effect.
  - `plotting.graphcolor.size` - Doesn't appear to have any effect.
  - `plotting.graphcolor.00-03` - Color of each plotter line.
- Note that although many theme settings appear to be available in theme/syntax/default.xml, only the `matchedBracket` `animate` value appears to have any effect.

![screenshot](https://github.com/per1234/ThemeTest/raw/master/screenshot.jpg)
