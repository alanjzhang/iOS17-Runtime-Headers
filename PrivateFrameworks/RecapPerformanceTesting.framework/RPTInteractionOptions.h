/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/RecapPerformanceTesting
 */

@interface RPTInteractionOptions : NSObject {
    long long  _pointerFrequency;
    unsigned long long  _preferredIdiom;
}

@property (nonatomic) long long pointerFrequency;
@property (nonatomic) unsigned long long preferredIdiom;
@property (nonatomic, readonly) bool prefersPointer;
@property (nonatomic, readonly) RCPEventSenderProperties *senderProperties;

+ (id)defaultForPlatform;

- (id)description;
- (id)init;
- (long long)pointerFrequency;
- (unsigned long long)preferredIdiom;
- (bool)prefersPointer;
- (id)senderProperties;
- (void)setPointerFrequency:(long long)arg1;
- (void)setPreferredIdiom:(unsigned long long)arg1;

@end
