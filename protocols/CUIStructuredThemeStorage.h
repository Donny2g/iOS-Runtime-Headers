/* Generated by RuntimeBrowser.
 */

@protocol CUIStructuredThemeStorage <NSObject>

@required

- (unsigned int)authoredWithSchemaVersion;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (float)fontSizeForFontSizeType:(NSString *)arg1;
- (BOOL)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(NSString *)arg3;
- (BOOL)getPhysicalColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 withName:(NSString *)arg2;
- (BOOL)hasPhysicalColorWithName:(NSString *)arg1;
- (CUIThemeRendition *)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (CUIThemeRendition *)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 usingKeySignature:(NSString *)arg2;

@optional

- (unsigned int)colorSpaceID;

@end
