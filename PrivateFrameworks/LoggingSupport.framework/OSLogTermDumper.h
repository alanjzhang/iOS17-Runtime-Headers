/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogTermDumper : NSObject {
    unsigned char  _colorMode;
    unsigned short  _cur_attrs;
    bool  _fancy;
    int  _fd;
    unsigned short  _last_attrs;
    struct os_trace_blob_s { 
        union { 
            char *ob_b; 
            void *ob_v; 
            char *ob_s; 
            char *ob_c; 
        } ; 
        unsigned int ob_len; 
        unsigned int ob_size; 
        unsigned int ob_maxsize; 
        unsigned short ob_flags; 
        bool ob_binary; 
    }  _ob;
    unsigned char  _ob_slop;
    bool  _vis;
}

@property (nonatomic) unsigned char bgColor;
@property (getter=isBold, nonatomic) bool bold;
@property (nonatomic, readonly) unsigned char colorMode;
@property (nonatomic) unsigned char fgColor;
@property (nonatomic, readonly) bool isFancy;
@property (getter=isOblique, nonatomic) bool oblique;
@property (nonatomic) unsigned short style;
@property (getter=isUnderlined, nonatomic) bool underline;

- (void)_flushAttrs;
- (void)_resetAttrsForNewline;
- (void)beginEditing;
- (unsigned char)bgColor;
- (void)close;
- (unsigned char)colorMode;
- (void)dealloc;
- (void)endEditing;
- (unsigned char)fgColor;
- (void)flush:(bool)arg1;
- (unsigned int)format:(const char *)arg1;
- (void)hexdump:(const void*)arg1 length:(unsigned long long)arg2;
- (id)init;
- (id)initWithFd:(int)arg1 colorMode:(unsigned char)arg2;
- (bool)isBold;
- (bool)isFancy;
- (bool)isOblique;
- (bool)isUnderlined;
- (void)pad:(int)arg1 count:(unsigned long long)arg2;
- (void)putUUID:(unsigned char)arg1;
- (void)putc:(int)arg1;
- (void)puts:(const char *)arg1;
- (void)resetStyle;
- (void)setBgColor:(unsigned char)arg1;
- (void)setBold:(bool)arg1;
- (void)setFgColor:(unsigned char)arg1;
- (void)setOblique:(bool)arg1;
- (void)setStyle:(unsigned short)arg1;
- (void)setUnderline:(bool)arg1;
- (void)startPager;
- (unsigned short)style;
- (unsigned int)vformat:(const char *)arg1 args:(char *)arg2;
- (void)write:(const void*)arg1 size:(unsigned long long)arg2;
- (void)writeln;

@end
