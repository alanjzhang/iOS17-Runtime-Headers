/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKParseBookMetadataOperation : CATOperation {
    CRKBook * _book;
    bool  mParseImage;
}

@property (nonatomic, readonly) CRKBook *book;

- (void).cxx_destruct;
- (id)book;
- (id)initWithBook:(id)arg1 parseImage:(bool)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)parseBookContentsOperationDidFinish:(id)arg1;
- (void)parseContentsFilePathOperationDidFinish:(id)arg1;
- (void)updateAuthor:(id)arg1;
- (void)updateTitle:(id)arg1;

@end
