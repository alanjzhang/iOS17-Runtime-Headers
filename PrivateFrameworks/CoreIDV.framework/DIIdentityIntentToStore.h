/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

@interface DIIdentityIntentToStore : NSObject <NSCopying> {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;

+ (id)mayStoreIntent;
+ (id)mayStoreIntentForDays:(long long)arg1;
+ (id)willNotStoreIntent;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;

@end
