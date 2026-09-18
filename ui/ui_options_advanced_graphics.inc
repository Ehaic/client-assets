<Page BackgroundColor='#FFFFFF' BackgroundTint='#203E42' BackgroundOpacity='1.00' OpacityRelativeMin='0.90' PalBgTint='back1' RStyleDefault='/Styles.New.whiteOutline_palW.rs_default' Name='advancedGraphics' PackSize='a,a' Size='513,555' ScrollExtent='513,555' Visible='false'>
<Data Name='CodeData' PageName='@ui_opt:page_graphics' resolution='content.resolution' mode='content.mode' vsync='content.vsync' apply='content.apply' keep='content.keep' revert='content.revert' status='content.status' />
<!-- Match the Graphics page: an outline frame plus a separate filled whitebox panel. -->
<Page Name='content' Location='3,3' Size='507,549' ScrollExtent='507,549' PackSize='a,a' RStyleDefault='/Styles.New.whitebox.rs_default' BackgroundOpacity='1.00'>
<Text Name='title' Font='bold_12' Location='14,12' Size='480,24' PackSize='a,f' TextColor='#97FFFF' LocalText='Advanced Graphics'>Advanced Graphics</Text>
<Text Name='intro' Font='bold_12' Location='14,44' Size='480,42' PackSize='a,f' LocalText='Change display settings without leaving the game.'>Change display settings without leaving the game.</Text>
<Text Name='modeLabel' TextColor='#97FFFF' Font='bold_12' Location='14,100' Size='480,20' LocalText='Display mode'>Display mode</Text>
<ComboBox BackgroundColor='#FFFFFF' BackgroundTint='#31585E' BackgroundOpacity='1.00' OpacityRelativeMin='1.00' Name='mode' Location='14,124' Size='460,24' ScrollExtent='460,24' DataSource='modeData' DropDownHeight='200' ButtonStyle='/Styles.New.buttons.combo_arrow.style' ButtonWidth='24' ButtonMargin='2,2,2,0' ListStyle='/Styles.list.combo.style_all' RStyleDefault='/Styles.New.whiteOutline_palW.rs_default' ScrollbarStyle='/Styles.scrollbar.default.vHud3.style' ScrollbarWidth='13' TextboxStyle='/Styles.textbox.combo.Style_new' TextboxMargin='8,3,0,0' />
<DataSource Name='modeData' />
<Text Name='resolutionLabel' TextColor='#97FFFF' Font='bold_12' Location='14,170' Size='480,20' LocalText='Windowed resolution'>Windowed resolution</Text>
<ComboBox BackgroundColor='#FFFFFF' BackgroundTint='#31585E' BackgroundOpacity='1.00' OpacityRelativeMin='1.00' Name='resolution' Location='14,194' Size='460,24' ScrollExtent='460,24' DataSource='resolutionData' DropDownHeight='200' ButtonStyle='/Styles.New.buttons.combo_arrow.style' ButtonWidth='24' ButtonMargin='2,2,2,0' ListStyle='/Styles.list.combo.style_all' RStyleDefault='/Styles.New.whiteOutline_palW.rs_default' ScrollbarStyle='/Styles.scrollbar.default.vHud3.style' ScrollbarWidth='13' TextboxStyle='/Styles.textbox.combo.Style_new' TextboxMargin='8,3,0,0' />
<DataSource Name='resolutionData' />
<Text Name='vsyncLabel' TextColor='#97FFFF' Font='bold_12' Location='14,240' Size='480,20' LocalText='Vertical sync (VSync)'>Vertical sync (VSync)</Text>
<ComboBox BackgroundColor='#FFFFFF' BackgroundTint='#31585E' BackgroundOpacity='1.00' OpacityRelativeMin='1.00' Name='vsync' Location='14,264' Size='460,24' ScrollExtent='460,24' DataSource='vsyncData' DropDownHeight='200' ButtonStyle='/Styles.New.buttons.combo_arrow.style' ButtonWidth='24' ButtonMargin='2,2,2,0' ListStyle='/Styles.list.combo.style_all' RStyleDefault='/Styles.New.whiteOutline_palW.rs_default' ScrollbarStyle='/Styles.scrollbar.default.vHud3.style' ScrollbarWidth='13' TextboxStyle='/Styles.textbox.combo.Style_new' TextboxMargin='8,3,0,0' />
<DataSource Name='vsyncData' />
<Text Name='hint' Font='bold_12' Location='14,305' Size='480,40' LocalText='Borderless fullscreen uses the current monitor resolution.'>Borderless fullscreen uses the current monitor resolution.</Text>
<Button BackgroundOpacity='1.00' OpacityRelativeMin='1.00' Name='apply' LocalText='Apply' Location='14,360' Size='150,24' Style='/Styles.New.buttons.hud.style'>Apply</Button>
<Button BackgroundOpacity='1.00' OpacityRelativeMin='1.00' Name='keep' LocalText='Keep settings' Location='174,360' Size='150,24' Style='/Styles.New.buttons.hud.style'>Keep settings</Button>
<Button BackgroundOpacity='1.00' OpacityRelativeMin='1.00' Name='revert' LocalText='Revert' Location='334,360' Size='150,24' Style='/Styles.New.buttons.hud.style'>Revert</Button>
<Text Name='status' Font='bold_12' Location='14,406' Size='480,105' PackSize='a,f' LocalText='' />
</Page>
</Page>
