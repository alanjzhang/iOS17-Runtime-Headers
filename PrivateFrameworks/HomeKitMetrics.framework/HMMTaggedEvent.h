/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitMetrics.framework/HomeKitMetrics
 */

@interface HMMTaggedEvent : NSObject {
    NSDictionary * _tagData;
    NSString * _tagName;
    long long  _tagTime;
}

@property (nonatomic, readonly) NSDictionary *tagData;
@property (nonatomic, readonly) NSString *tagName;
@property (nonatomic, readonly) long long tagTime;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTag:(id)arg1 data:(id)arg2;
- (id)initWithTag:(id)arg1 time:(long long)arg2 data:(id)arg3;
- (id)tagData;
- (id)tagName;
- (long long)tagTime;

@end