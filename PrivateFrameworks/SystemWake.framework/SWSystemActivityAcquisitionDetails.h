/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SystemWake.framework/SystemWake
 */

@interface SWSystemActivityAcquisitionDetails : NSObject <SWSystemActivityAcquisitionDetails> {
    bool  _afterFailingToRevertPendingSleep;
    bool  _afterPendingSleepWasAlreadyInitiated;
    bool  _afterSleepOfNonZeroDuration;
}

@property (nonatomic, readonly) bool afterFailingToRevertPendingSleep;
@property (nonatomic, readonly) bool afterPendingSleepWasAlreadyInitiated;
@property (nonatomic, readonly) bool afterSleepOfNonZeroDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)afterFailingToRevertPendingSleep;
- (bool)afterPendingSleepWasAlreadyInitiated;
- (bool)afterSleepOfNonZeroDuration;
- (id)description;
- (id)initWithAfterPendingSleepWasAlreadyInitiated:(bool)arg1 afterFailingToRevertPendingSleep:(bool)arg2 afterSleepOfNonZeroDuration:(bool)arg3;

@end