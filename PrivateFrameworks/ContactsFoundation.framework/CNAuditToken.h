/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNAuditToken : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _audit_token;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } audit_token;

+ (id)auditToken:(struct { unsigned int x1[8]; })arg1;

- (struct { unsigned int x1[8]; })audit_token;

@end
