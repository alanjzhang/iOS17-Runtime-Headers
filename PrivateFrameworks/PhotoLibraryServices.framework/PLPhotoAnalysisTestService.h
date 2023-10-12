/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoAnalysisTestService : NSObject {
    _Atomic unsigned long long  _operationID;
    <PLPhotoAnalysisServiceProvider> * _serviceProvider;
}

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithServiceProvider:(id)arg1;
- (unsigned long long)performAsyncLongOperationWithReply:(id /* block */)arg1;
- (id)performGetString;

@end
