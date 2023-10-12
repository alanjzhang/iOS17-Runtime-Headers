/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewDropItemImpl : NSObject <_UITableViewDropItem> {
    UIDragItem * _dragItem;
    NSIndexPath * _sourceIndexPath;
    NSIndexPath * _translatedSourceIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDragItem *dragItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } previewSize;
@property (nonatomic, retain) NSIndexPath *sourceIndexPath;
@property (readonly) Class superclass;
@property (getter=_translatedSourceIndexPath, setter=_setTranslatedSourceIndexPath:, nonatomic, retain) NSIndexPath *translatedSourceIndexPath;

- (void).cxx_destruct;
- (void)_setTranslatedSourceIndexPath:(id)arg1;
- (void)_translateSourceIndexPath:(id /* block */)arg1;
- (id)_translatedSourceIndexPath;
- (id)dragItem;
- (id)initWithDragItem:(id)arg1 sourceIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })previewSize;
- (void)setDragItem:(id)arg1;
- (void)setSourceIndexPath:(id)arg1;
- (id)sourceIndexPath;

@end
