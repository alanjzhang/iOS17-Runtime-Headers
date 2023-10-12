/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface _LTRateLimiter : NSObject {
    unsigned long long  _count;
    unsigned long long  _maximumDynamicContentRequests;
    unsigned long long  _maximumPageLoadRequests;
    bool  _pageLoaded;
}

@property (nonatomic) unsigned long long maximumDynamicContentRequests;
@property (nonatomic) unsigned long long maximumPageLoadRequests;

- (bool)allowedForRequests:(unsigned long long)arg1;
- (id)initWithMaximumPageLoadRequest:(unsigned long long)arg1 maximumDynamicContentRequests:(long long)arg2;
- (void)markPageLoaded;
- (unsigned long long)maximumDynamicContentRequests;
- (unsigned long long)maximumPageLoadRequests;
- (void)setMaximumDynamicContentRequests:(unsigned long long)arg1;
- (void)setMaximumPageLoadRequests:(unsigned long long)arg1;

@end