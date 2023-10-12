/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EABluetoothAccessoryPicker : NSObject {
    <EABluetoothAccessoryPickerDelegate> * _delegate;
}

@property (nonatomic) <EABluetoothAccessoryPickerDelegate> *delegate;

+ (void)wakeSelectedBluetoothAccessories:(id)arg1;

- (void)dealloc;
- (id)delegate;
- (void)dismissPicker;
- (id)initWithPredicate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)show;

@end
