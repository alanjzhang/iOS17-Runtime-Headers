/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTCFUserNotification : NSObject {
    id /* block */  _handler;
    NSString * _identifier;
    struct __CFUserNotification { } * _notification;
    MTOSTransaction * _transaction;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) struct __CFUserNotification { }*notification;
@property (nonatomic, retain) MTOSTransaction *transaction;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)identifier;
- (struct __CFUserNotification { }*)notification;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNotification:(struct __CFUserNotification { }*)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
