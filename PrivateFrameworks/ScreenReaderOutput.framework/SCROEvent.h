/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROEvent : NSObject {
    NSMutableArray * _actions;
    NSMutableArray * _callbacks;
    NSMutableDictionary * _getDictionary;
    int  _handlerType;
    bool  _readOnly;
    NSMutableDictionary * _setDictionary;
}

+ (id)brailleEvent;

- (void).cxx_destruct;
- (id)claimDictionary;
- (id)claimValueForKey:(int)arg1;
- (int)handlerType;
- (id)initForHandlerType:(int)arg1;
- (id)mainDictionary;
- (void)performWithHandler:(id)arg1 trusted:(bool)arg2;
- (void)requestPerformActionForKey:(int)arg1;
- (void)requestRegisterCallbackForKey:(int)arg1;
- (void)requestSetValue:(id)arg1 forKey:(int)arg2;
- (void)requestValueForKey:(int)arg1;
- (void)setClaimDictionary:(id)arg1;
- (void)setMainDictionary:(id)arg1;

@end
