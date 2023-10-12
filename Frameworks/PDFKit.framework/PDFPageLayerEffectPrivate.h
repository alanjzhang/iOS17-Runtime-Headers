/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayerEffectPrivate : NSObject {
    PDFAnnotation * annotation;
    NSMutableDictionary * markupEffectLayers;
    PDFPageLayerEffect * noteLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  pageFrame;
    <PDFPageLayerInterface> * pageLayer;
    PDFScannerResult * pdfResult;
    CALayer * rootSelectionLayer;
    NSMutableDictionary * selectionEffectLayers;
    NSMutableArray * selections;
    bool  shouldRotateContent;
    NSUUID * uuid;
}

- (void).cxx_destruct;

@end