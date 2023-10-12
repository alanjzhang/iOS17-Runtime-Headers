/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKExpiredCoursesInteraction : CATOperation {
    NSSet * _courses;
    <CRKExpiredCoursesInteractionDelegate> * _delegate;
    <CRKRequestPerformingProtocol> * _studentDaemonProxy;
    bool  mIsPrompting;
    CATRemoteTaskOperation * mLeaveControlGroupsOperation;
}

@property (nonatomic, readonly) NSSet *courses;
@property (nonatomic, readonly) <CRKExpiredCoursesInteractionDelegate> *delegate;
@property (nonatomic, readonly) <CRKRequestPerformingProtocol> *studentDaemonProxy;

- (void).cxx_destruct;
- (void)cancel;
- (id)courses;
- (id)delegate;
- (id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2 courses:(id)arg3;
- (bool)isAsynchronous;
- (void)leaveControlGroupsOperationDidFinish:(id)arg1;
- (void)main;
- (void)removeCourses:(id)arg1;
- (id)studentDaemonProxy;

// CRKExpiredCoursesInteraction (Unavailable)

+ (id)new;

- (id)init;

@end
