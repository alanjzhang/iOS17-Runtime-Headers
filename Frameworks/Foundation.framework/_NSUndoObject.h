/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSUndoObject : NSObject {
    id  _target;
    _NSUndoObject * next;
    _NSUndoObject * previous;
}

- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)invoke;
- (bool)isBeginMark;
- (bool)isEndMark;
- (id)target;

@end
