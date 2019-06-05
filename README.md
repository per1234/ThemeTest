ThemeTest
==========

Documentation and Sketches for testing [Arduino](http://arduino.cc) IDE themes. Demonstrates all theme settings. Packaged as a library in order to define all possible keywords.


### Installation
- Download https://github.com/per1234/ThemeTest/archive/master.zip
- Using Arduino IDE 1.0.x:
  - **Sketch > Import Library... > Add Library... >** select the downloaded file **> Open**
- Using Arduino IDE 1.5+:
  - **Sketch > Include Library > Add ZIP Library... >** select the downloaded file **> Open**


### Editing the Arduino IDE's Theme
By editing a few files the appearance of the Arduino IDE can easily be modified to your liking. This can be useful for improving the visual accessibility or just for aesthetic purposes.

The theme files are located under a subfolder of the Arduino IDE installation folder.
- **Windows or Linux**: `lib/theme`
- **macOS**: `Contents/Resources/Java/lib/theme`

The Arduino IDE must be restarted before changes to the theme files take effect.

Note that a few other appearance-related settings are located in the Arduino's **File > Preferences** and also the file preference.txt, which may be found by clicking the link on the line under **File > Preferences > More preferences can be edited directly in the file**.


### Theme documentation
The following information was determined using Arduino IDE 1.6.11.
#### Graphics Files
These are .png, @2x.png, and .svg files located in lib/theme
- buttons - Rows: Unselected, hover, selected. Columns: Compile, upload, new, open, save.
- close - Doesn't appear to be used currently.
- lock - Doesn't appear to be used currently.
- newwindow - Doesn't appear to be used currently.
- resize - Doesn't appear to be used currently.
- tab-sel-left - Left border of the selected tab.
- tab-sel-mid - Body of the selected tab.
- tab-sel-right - Right border of the selected tab.
- tab-unsel-left - Left border of the unselected tab.
- tab-unsel-mid - Body of the unselected tab.
- tab-unsel-right - Right border of the unselected tab.
- tab-sel-menu - Doesn't appear to be used currently.
- tab-unsel-menu - Tab menu button.

#### Theme Settings
- Settings found in lib/theme/theme.txt:
  - `status.notice.fgcolor` - Non-error text color on the status bar.  - `buttons.bgcolor` - Color of the button bar.
  - `status.notice.bgcolor` - Background color of the status bar when not in error mode.
  - `status.error.fgcolor` - Text color of the Status Bar in error mode.
  - `status.error.bgcolor` - Background color of the Status Bar in error mode.
  - `status.edit.fgcolor` - Doesn't appear to have any effect.
  - `status.edit.bgcolor` - Doesn't appear to have any effect.
  - `status.font` - Status Bar text font.
  - `header.bgcolor` - Color behind the tabs.
  - `header.text.selected.color` - Color of the currently selected tab text.
  - `header.text.unselected.color` - Color of the unselected tab text.
  - `header.text.font` - Font of the Header text.
  - `console.font` - Font of console text.
  - `console.font.macosx` - Font of console text on Mac OS X.
  - `console.color` - Background color of the console.
  - `console.output.color` - Console text color for non-error/warning output.
  - `console.error.color` - Console text color for error/warning messages.
  - `buttons.bgcolor` - Button bar color.
  - `buttons.status.font` - Font of text shown to the right of the buttons when you hover over one.
  - `buttons.status.color` - Color of the text shown to the right of the buttons when you hover over one.
  - `plotting.bgcolor` - Background color of the Serial Plotter.
  - `plotting.color` - Doesn't appear to have any effect.
  - `plotting.gridcolor` - Color of the Serial Plotter grid.
  - `plotting.boundscolor` - Color of the bounds lines on the left and bottom margins of the Serial Plotter.
  - `plotting.graphcolor.size` - The number of Serial plotter line colors defined.
  - `plotting.graphcolor.nn` - Color of each line in Serial Plotter.
  - `linestatus.color` - Color of the text on the Line Status bar.
  - `linestatus.bgcolor` - Line Status bar background color.
  - `linestatus.font` - Font of the Line Status bar text.
  - `linestatus.height` - Height of the Line Status bar.
  - `editor.fgcolor` - Default editor text color.
  - `editor.bgcolor` - Background color of the editor window.
  - `editor.linehighlight.color` - Background color of the current line highlight (enabled by setting `editor.linehighlight=true`).
  - `editor.linehighlight` - Enable/disable highlighting of the line the cursor is on.
  - `editor.caret.color` - AKA cursor.
  - `editor.external.bgcolor` - Background color of the editor when **File > Preferences > Use external editor** is checked.
  - `editor.selection.color` - Background color of selected text.
  - `editor.invalid.style` - Doesn't appear to have any effect.
  - `editor.eolmarkers` - Enable/disable line end indicators(`¶`).
  - `editor.eolmarkers.color` - Color of line end indicators. (enabled by setting `editor.eolmarkers=true`).
  - `editor.brackethighlight` - Enable/disable highlighting of the bracket matching the one at the cursor position.
  - `editor.brackethighlight.color` - Matched bracket highlight foreground color. (enabled by setting `editor.brackethighlight=true`).
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
  - `editor.literal_boolean.style` - true or false
  - `editor.literal_char.style` - Doesn't appear to have any effect.
  - `editor.literal_string_double_quote.style` - Text surrounded by double quotes.
  - `editor.preprocessor.style` - Preprocessor directives(or `PREPROCESSOR` keywords in the keywords.txt file of any installed library).
  - `editor.url.style` - Doesn't appear to have any effect.
  - `editor.operator.style` - e.g. + - = /
  - `editor.label.style` - Doesn't appear to have any effect.
  - `editor.comment1.style` - C++ style comments.
  - `editor.comment2.style` - C style comments.

- Settings found in lib/theme/syntax/default.xml:
  - `<background color=` - Doesn't appear to have any effect.
  - `<caret color=` - Doesn't appear to have any effect.
  - `<selection`
    - `fg=` - Doesn't appear to have any effect.
    - `bg=` - Doesn't appear to have any effect.
  - `<currentLineHighlight`
    - `color=` - Doesn't appear to have any effect.
    - `fade=` - Doesn't appear to have any effect.
  - `<marginLine fg=` - Doesn't appear to have any effect.
  - `<markAllHighlight color=` - Doesn't appear to have any effect.
  - `<markOccurrencesHighlight`
    - `color=` - Doesn't appear to have any effect.
    - `border=` - Doesn't appear to have any effect.
  - `<matchedBracket` - Highlighting of the bracket matched to the one at the cursor position.
    - `fg=` - Doesn't appear to have any effect.
    - `bg=` - Matched bracket highlight background color.
    - `highlightBoth=` - Doesn't appear to have any effect.
    - `animate=` - Animation on matched bracket highlighting.
  - `<hyperlinks fg=` - Doesn't appear to have any effect.
  - `<secondaryLanguages>`
    - `<language`
      - `index=` - Doesn't appear to have any effect.
      - `bg=` - Doesn't appear to have any effect.
  - `<gutterBorder color=` - Doesn't appear to have any effect.
  - `<lineNumbers fg=` - Doesn't appear to have any effect.
  - `<foldIndicator`
    - `fg=` - Doesn't appear to have any effect.
    - `iconBg=` - Doesn't appear to have any effect.
  - `<iconRowHeader activeLineRange=` - Doesn't appear to have any effect.
  - `<style token="IDENTIFIER" fg=` - Doesn't appear to have any effect.
  - `<style token="DATA_TYPE"`
    - `fg=` - Doesn't appear to have any effect.
    - `bold=` - Doesn't appear to have any effect.
  - `<style token="FUNCTION" fg=` - Doesn't appear to have any effect.
  - `<style token="VARIABLE"`
    - `fg=` - Doesn't appear to have any effect.
    - `bold=` - Doesn't appear to have any effect.
  - `<style token="RESERVED_WORD"`
    - `fg=` - Doesn't appear to have any effect.
    - `bold=` - Doesn't appear to have any effect.
  - `<style token="RESERVED_WORD_2"`
    - `fg=` - Doesn't appear to have any effect.
    - `bold=` - Doesn't appear to have any effect.
  - `<style token="PREPROCESSOR"`
    - `fg=` - Doesn't appear to have any effect.
    - `bold=` - Doesn't appear to have any effect.
  - `<style token="ANNOTATION" fg=` - Doesn't appear to have any effect.
  - `<style token="COMMENT_DOCUMENTATION" fg=` - Doesn't appear to have any effect.
  - `<style token="COMMENT_EOL" fg=` - Doesn't appear to have any effect.
  - `<style token="COMMENT_MULTILINE" fg=` - Doesn't appear to have any effect.
  - `<style token="COMMENT_KEYWORD" fg=` - Doesn't appear to have any effect.
  - `<style token="COMMENT_MARKUP" fg=` - Doesn't appear to have any effect.
  - `<style token="LITERAL_BOOLEAN"`
    - `fg=` - Doesn't appear to have any effect.
    - `bold=` - Doesn't appear to have any effect.
  - `<style token="LITERAL_NUMBER_FLOAT" fg=` - Doesn't appear to have any effect.
  - `<style token="LITERAL_NUMBER_DECIMAL_INT" fg=` - Integers.
  - `<style token="LITERAL_NUMBER_FLOAT" fg=` - Decimal fractions.
  - `<style token="LITERAL_NUMBER_HEXADECIMAL" fg=` - Numbers in hexadecimal form(start with 0x followed by only 0-9, A-F, a-f).
  - `<style token="LITERAL_STRING_DOUBLE_QUOTE" fg=` - Doesn't appear to have any effect.
  - `<style token="LITERAL_CHAR" fg=` - Doesn't appear to have any effect.
  - `<style token="LITERAL_BACKQUOTE" fg=` - Doesn't appear to have any effect.
  - `<style token="OPERATOR" fg=` - Doesn't appear to have any effect.
  - `<style token="REGEX" fg=` - Doesn't appear to have any effect.
  - `<style token="SEPARATOR" fg=` - Non-highlighted bracket.
  - `<style token="WHITESPACE" fg=` - Doesn't appear to have any effect.
  - `<style token="ERROR_IDENTIFIER" fg=` - Text that starts with a backtick.
  - `<style token="ERROR_NUMBER_FORMAT" fg=` - Doesn't appear to have any effect.
  - `<style token="ERROR_STRING_DOUBLE" fg=` - Text that starts with a double quote(but not text surrounded by double quotes).
  - `<style token="ERROR_CHAR" fg=` - Text that starts with a single quote(but not a single character surrounded by single quotes).


 ### Suggested Test Procedure
Pay attention to the contrast between all possible foreground and background colors of text and graphics.
- **File > Examples > ThemeTest > ThemeTest**
  - Buttons
    - Button bar color (`buttons.bgcolor`)
    - Button graphics (first row of buttons.png)
    - Button graphics with mouse pointer hovering over them (second row of buttons.png)
    - Button graphics after they are clicked (third row of buttons.png)
    - Font of text shown to the right of the buttons when mouse pointer is hovering over a button (`buttons.status.font`)
    - Color of text shown to the right of the buttons when mouse pointer is hovering over a button (`buttons.status.color`)
  - Header
    - Header bar color (`header.bgcolor`)
    - Tab text font (`header.text.font`)
    - Selected tab text color (`header.text.selected.color`)
    - Selected tab graphics (tab-sel-*.png)
    - Unselected tab text color (`header.text.unselected.color`)
    - Unselected tab graphics. (tab-unsel-*.png)
    - Tab menu button graphics(there is no selected/hover state for this button) (tab-unsel-menu.png)
  - Editor
    - Unselected text - See sketch for theme configuration file property names.
    - Selected text - See sketch for theme configuration file property names.
    - Current line highlight (`editor.linehighlight.color`). If enabled (`editor.linehighlight`), move the cursor to each line of the sketch to check color contrast.
    - Matched bracket highlighting (`editor.brackethighlight`)
    - Matched bracket highlight animation (`<matchedBracket animate=`)
    - Matched bracket highlight background color (`<matchedBracket bg=`)
    - Matched bracket highlight foreground color (`editor.brackethighlight.color`)
  - **Sketch > Compile/Verify** - This will show theme behavior after compile error.
  - Status Bar(error state)
    - Text color (`status.error.fgcolor`)
    - Status bar color (`status.error.bgcolor`)
  - Console(with error text)
    - Font (`console.font`/`console.font.macosx`)
    - Foreground color of unselected error text (`console.error.color`)
    - Background color of unselected text (`console.color`)
    - Foreground color of selected text
    - Background color of selected text
  - Line Status bar - Bar at the bottom of the screen that shows the line number, board, and port.
    - Text color (`linestatus.color`)
    - Background color (`linestatus.bgcolor`)
    - Font (`linestatus.font`)
    - Height (`linestatus.height`)
- **File > Examples > ThemeTest > SerialPlotter**
  - **File > Preferences > Show verbose output during > upload**(uncheck)
  - **Sketch > Upload**
    - Status Bar(non-error state)
      - Text color (`status.notice.fgcolor`)
      - Status bar color (`status.notice.fgcolor`)
    - Console(with output text)
      - Text color (`console.output.color`)
  - **Tools > Serial Plotter**
  - Select **9600 baud** from the menu in the lower left corner of the Serial Plotter.
    - Background color (`plotting.bgcolor`)
    - Color of each plotter line (`plotting.graphcolor.00-03`)
    - Grid color (`plotting.gridcolor`)
    - Bounds color (`plotting.boundscolor`)


### Contributing
Pull requests or issue reports are welcome! Please see the [contribution rules](https://github.com/per1234/ThemeTest/blob/master/.github/CONTRIBUTING.md) for instructions.


![screenshot](https://github.com/per1234/ThemeTest/raw/master/screenshot.png)
