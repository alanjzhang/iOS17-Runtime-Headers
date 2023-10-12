/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPWebAccessStateController : NSObject <CDPWebAccessStatusProvider, CDPWebAccessStatusUpdater>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)updateWebAccessStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (unsigned long long)webAccessStatus:(id*)arg1;
- (void)webAccessStatusWithCompletion:(id /* block */)arg1;

@end