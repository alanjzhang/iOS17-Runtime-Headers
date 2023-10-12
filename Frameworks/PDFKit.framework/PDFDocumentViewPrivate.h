/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentViewPrivate : NSObject {
    PDFDocumentContentView * contentView;
    PDFDocument * document;
    struct CGSize { 
        double width; 
        double height; 
    }  documentViewSize;
    bool  ignoreChangedBoundsForBoxNotification;
    PDFPageBackgroundManager * pageBackgroundManager;
    NSMutableDictionary * pageFrames;
    NSMutableDictionary * pageViews;
    PDFView * pdfView;
    PDFAnnotationPointerTrackingView * pointerTrackingView;
    PDFRenderingProperties * renderingProperties;
}

- (void).cxx_destruct;

@end