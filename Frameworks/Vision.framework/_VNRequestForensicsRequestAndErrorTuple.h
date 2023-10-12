/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface _VNRequestForensicsRequestAndErrorTuple : NSObject {
    NSError * _error;
    VNRequest * _request;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) VNRequest *request;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1 error:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)request;

@end