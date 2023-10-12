/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentPrivate : NSObject {
    unsigned int  accessPermissions;
    PDFAKDocumentAdaptor * akDocumentAdaptor;
    PDFAKPageOverlayViewProvider * akPageOverlayViewProvider;
    bool  allowsCommenting;
    bool  allowsContentAccessibility;
    bool  allowsCopying;
    bool  allowsDocumentAssembly;
    bool  allowsDocumentChanges;
    bool  allowsFormFieldEntry;
    bool  allowsPrinting;
    NSDictionary * appendedAttributes;
    NSObject<OS_dispatch_queue> * asyncSearchQueue;
    NSDictionary * attributes;
    NSMutableIndexSet * bookmarkedPages;
    bool  createdWithHighLatencyDataProvider;
    id  delegate;
    struct CGPDFDocument { } * document;
    NSArray * documentCatalogMetadata;
    bool  documentChanged;
    bool  documentHasBurnInAnnotations;
    bool  documentHasPageWithApplicationData;
    unsigned long long  documentRedactionCount;
    NSURL * documentURL;
    long long  findCharIndex;
    PDFSelection * findInstance;
    int  findModel;
    unsigned long long  findOptions;
    long long  findPageIndex;
    NSMutableArray * findResults;
    NSArray * findStrings;
    bool  finding;
    PDFForm * formData;
    bool  formDataLoaded;
    NSObject<OS_dispatch_queue> * formFillingQueue;
    NSIndexSet * initialBookmarkedPageIndices;
    bool  isEncrypted;
    bool  isTaggedPDF;
    bool  isUnlocked;
    long long  lastFindCharIndex;
    long long  lastFindPageIndex;
    bool  limitedSearch;
    int  majorVersion;
    int  minorVersion;
    PDFOutline * outline;
    NSString * ownerPassword;
    <PDFDocumentPageChangeDelegate> * pageChangeDelegate;
    unsigned long long  pageCount;
    NSMutableDictionary * pageDictionaryIndices;
    NSMutableDictionary * pageIndices;
    NSMutableArray * pages;
    struct { 
        bool pagesAdded; 
        bool blankPagesAdded; 
        bool pagesRemoved; 
        bool pagesExchanged; 
    }  pagesChanged;
    NSOrderedSet * pagesOrderedSet;
    <PDFAKControllerDelegateProtocol> * pdfAKControllerDelegateForDeferredSetup;
    long long  permission;
    NSMutableIndexSet * preloadingPageIndexes;
    PDFRenderingProperties * renderingProperties;
    bool  respondsToClassForAnnotationClass;
    bool  respondsToClassForAnnotationType;
    bool  respondsToClassForPage;
    bool  respondsToDidBeginDocumentFind;
    bool  respondsToDidBeginPageFind;
    bool  respondsToDidEndDocumentFind;
    bool  respondsToDidEndPageFind;
    bool  respondsToDidFindMatch;
    bool  respondsToDidMatchString;
    bool  respondsToDidReceiveAnalysis;
    bool  respondsToDidUnlock;
    bool  respondsToHandleTabFrom;
    bool  respondsToPrintJobTitle;
    bool  respondsToShouldReadAKInkAnnotations;
    bool  subclassOverridesPageAtIndex;
    NSObject<OS_dispatch_queue> * textExtractionQueue;
    NSString * userPassword;
    NSString * xmpNameSpace;
    NSString * xmpPrefix;
    NSString * xmpRootPath;
}

- (void).cxx_destruct;

@end
