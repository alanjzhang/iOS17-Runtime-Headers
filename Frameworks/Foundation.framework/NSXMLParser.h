/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXMLParser : NSObject {
    NSSet * _allowedEntityURLs;
    NSData * _bomChunk;
    unsigned long long  _chunkSize;
    id  _delegate;
    bool  _delegateAborted;
    NSError * _error;
    unsigned long long  _externalEntityResolvingPolicy;
    bool  _haveDetectedEncoding;
    NSMutableArray * _namespaces;
    struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long long x34; long long x35; int x36; int x37; int x38; char *x39; char *x40; } * _parserContext;
    unsigned long long  _parserFlags;
    struct _xmlSAXHandler { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); unsigned int x28; void *x29; int (*x30)(); int (*x31)(); int (*x32)(); } * _saxHandler;
    bool  _shouldStopXMLParser;
    struct __CFDictionary { } * _slowStringMap;
    NSURL * _url;
    NSInputStream * xmlParserStream;
}

@property (copy) NSSet *allowedExternalEntityURLs;
@property <NSXMLParserDelegate> *delegate;
@property unsigned long long externalEntityResolvingPolicy;
@property (readonly, copy) NSError *parserError;
@property bool shouldProcessNamespaces;
@property bool shouldReportNamespacePrefixes;
@property bool shouldResolveExternalEntities;

+ (id)currentParser;
+ (void)setCurrentParser:(id)arg1;

- (bool)_handleParseResult:(long long)arg1;
- (void)_initializeSAX2Callbacks;
- (void)_popNamespaces;
- (void)_pushNamespaces:(id)arg1;
- (void)_setExpandedParserError:(id)arg1;
- (void)_setParserError:(long long)arg1;
- (struct _xmlParserInput { struct _xmlParserInputBuffer {} *x1; char *x2; char *x3; char *x4; char *x5; char *x6; int x7; int x8; int x9; unsigned long long x10; int (*x11)(); char *x12; char *x13; int x14; int x15; }*)_xmlExternalEntityWithURL:(const char *)arg1 identifier:(const char *)arg2 context:(struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long long x34; long long x35; int x36; int x37; int x38; char *x39; char *x40; }*)arg3 originalLoaderFunction:(int (*)arg4;
- (void)abortParsing;
- (id)allowedExternalEntityURLs;
- (long long)columnNumber;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)externalEntityResolvingPolicy;
- (bool)finishIncrementalParse;
- (id)initForIncrementalParsing;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithStream:(id)arg1;
- (long long)lineNumber;
- (bool)parse;
- (bool)parseData:(id)arg1;
- (bool)parseFromStream;
- (id)parserError;
- (id)publicID;
- (void)setAllowedExternalEntityURLs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternalEntityResolvingPolicy:(unsigned long long)arg1;
- (void)setShouldContinueAfterFatalError:(bool)arg1;
- (void)setShouldProcessNamespaces:(bool)arg1;
- (void)setShouldReportNamespacePrefixes:(bool)arg1;
- (void)setShouldResolveExternalEntities:(bool)arg1;
- (bool)shouldContinueAfterFatalError;
- (bool)shouldProcessNamespaces;
- (bool)shouldReportNamespacePrefixes;
- (bool)shouldResolveExternalEntities;
- (id)systemID;

@end
