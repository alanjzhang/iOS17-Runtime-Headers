/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLDownloadInternal : NSObject {
    NSOperationQueue * _targetQueue;
    struct _CFURLDownload { } * cfDownload;
    struct _CFURLAuthChallenge { } * currCFChallenge;
    NSURLAuthenticationChallenge * currNSChallenge;
    id  delegate;
    bool  downloadActive;
}

- (void)dealloc;

@end
