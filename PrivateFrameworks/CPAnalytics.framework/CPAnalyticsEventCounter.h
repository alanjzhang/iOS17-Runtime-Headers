/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
 */

@interface CPAnalyticsEventCounter : NSObject {
    unsigned long long  _count;
    NSString * _countKey;
    CPAnalyticsEventMatcher * _matcher;
    NSString * _name;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, readonly) NSString *countKey;
@property (nonatomic, readonly) CPAnalyticsEventMatcher *matcher;
@property (nonatomic, readonly) NSString *name;

+ (id)_validateAndParseEventName:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)countEvent:(id)arg1;
- (id)countKey;
- (id)initWithConfig:(id)arg1;
- (id)initWithEventName:(id)arg1;
- (id)initWithName:(id)arg1 matcher:(id)arg2;
- (id)matcher;
- (id)name;
- (void)resetCount;
- (void)setCount:(unsigned long long)arg1;

@end
