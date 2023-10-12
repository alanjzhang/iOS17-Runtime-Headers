/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {
    NSString * _nextETag;
}

@property (nonatomic) <CoreDAVTaskDelegate> *delegate;
@property (nonatomic, retain) NSString *nextETag;

- (void).cxx_destruct;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)nextETag;
- (void)setNextETag:(id)arg1;

@end
