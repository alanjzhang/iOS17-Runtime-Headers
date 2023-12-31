/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFailIfMacAndUnenrolledStudentdTransportProvider : NSObject <CRKTransportProviding> {
    <CRKFeatureDataStoreProtocol> * _featureDataStore;
    <CRKTransportProviding> * _underlyingTransportProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CRKFeatureDataStoreProtocol> *featureDataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CRKTransportProviding> *underlyingTransportProvider;

- (void).cxx_destruct;
- (id)featureDataStore;
- (void)fetchTransportWithCompletion:(id /* block */)arg1;
- (id)initWithTransportProvider:(id)arg1;
- (id)initWithTransportProvider:(id)arg1 featureDataStore:(id)arg2;
- (id)underlyingTransportProvider;

@end
