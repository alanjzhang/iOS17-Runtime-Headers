/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCurrentPlatformStudentdTransportProvider : NSObject <CRKTransportProviding> {
    <CRKTransportProviding> * mBaseProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchTransportWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)makeProviderForCurrentPlatform;

@end
