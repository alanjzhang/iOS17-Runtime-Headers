/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKDataProtectionStateMonitor : NSObject {
    id /* block */  _changeHandler;
    NSUUID * _handlerUUID;
    _DKDataProtectionMonitor * _main;
}

@property (copy) id /* block */ changeHandler;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (void)dealloc;
- (id)init;
- (bool)isDataAvailableFor:(id)arg1;
- (void)setChangeHandler:(id /* block */)arg1;

@end
