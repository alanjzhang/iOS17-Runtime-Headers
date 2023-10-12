/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate> {
    EKUIDividedGridViewTableViewCell * _tableViewCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allCells;
- (id)cellForRow:(long long)arg1;
- (id)cellLabels;
- (void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(long long)arg3;
- (void)dividedGridViewControllerDidLayout:(id)arg1;
- (bool)drawBackgroundForRow:(long long)arg1;
- (long long)gridViewType;
- (double)heightForRow:(long long)arg1;
- (void)prepareForDisplay;
- (void)refreshCells;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;
- (id)tableViewCell;

@end
