/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Sleep.framework/Sleep
 */

@interface HKSPDiagnostics : NSObject {
    NSString * _label;
    HKSPObserverSet * _providers;
}

@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) HKSPObserverSet *providers;

- (void).cxx_destruct;
- (void)_registerStateHandler;
- (void)addProvider:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (id)label;
- (id)providers;
- (void)removeProvider:(id)arg1;

@end
