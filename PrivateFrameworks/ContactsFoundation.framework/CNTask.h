/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNTask : NSObject {
    bool  _cancelled;
    NSString * _name;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (copy) NSString *name;

+ (id)taskWithBlock:(id /* block */)arg1;
+ (id)taskWithError:(id)arg1;
+ (id)taskWithName:(id)arg1 block:(id /* block */)arg2;
+ (id)taskWithName:(id)arg1 error:(id)arg2;
+ (id)taskWithName:(id)arg1 result:(id)arg2;
+ (id)taskWithName:(id)arg1 subtasks:(id)arg2;
+ (id)taskWithResult:(id)arg1;

- (void).cxx_destruct;
- (bool)cancel;
- (id)description;
- (id)flatMap:(id /* block */)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isCancelled;
- (id)map:(id /* block */)arg1;
- (id)name;
- (id)profileWithTimeProvider:(id)arg1 os_log:(id)arg2;
- (id)recover:(id /* block */)arg1;
- (id)run;
- (id)run:(id*)arg1;
- (void)setName:(id)arg1;

@end
