/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNObservableSkipUntilSignalObserver : NSObject <CNObserver> {
    <_CNObservableSkipUntilSignalObserverDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <_CNObservableSkipUntilSignalObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (id)initWithDelegate:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
