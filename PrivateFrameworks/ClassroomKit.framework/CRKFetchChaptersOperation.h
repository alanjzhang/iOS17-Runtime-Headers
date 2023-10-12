/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchChaptersOperation : CATOperation {
    NSString * mIdentifier;
    NSString * mIdentifierType;
    NSString * mPath;
}

- (void).cxx_destruct;
- (id)initWithBook:(id)arg1;
- (id)initWithBookPath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3;
- (id)initWithRequest:(id)arg1 error:(id*)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)parseOFPPackageContentsOperationDidFinish:(id)arg1;
- (void)parseOPFFilePathOperationDidFinish:(id)arg1;
- (void)parseTableOfContentsOperationDidFinish:(id)arg1;

@end
