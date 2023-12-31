/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
 */

@interface SIRINLUResponseStatus : NSObject <NSSecureCoding> {
    int  _statusCode;
    NSString * _statusDescription;
}

@property (nonatomic) int statusCode;
@property (nonatomic, retain) NSString *statusDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initStatusCode:(int)arg1 statusDescription:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setStatusDescription:(id)arg1;
- (int)statusCode;
- (id)statusDescription;

@end
