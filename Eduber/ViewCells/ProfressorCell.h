//
//  SVConfirmHeaderView.h
//  Savvee
//

#import <UIKit/UIKit.h>
#import "ClassInfo.h"
#import "UIView+Shadow.h"
#import "UIButton+Style.h"
#import "Professor.h"
#import "Courses.h"
#import <AFNetworking/AFNetworking.h>

@protocol ProfressorCellDelegate <NSObject>
@required
- (void) joinClass:(Courses *)professor;
@end

@interface ProfressorCell : UITableViewCell{
    Courses *co;
}
@property (weak, nonatomic) IBOutlet UILabel *likeNumberLabel;

@property(weak,nonatomic)IBOutlet UIView *containerView;
@property(weak,nonatomic)IBOutlet UIImageView *avatarView;

@property (weak, nonatomic) IBOutlet UIButton *joinButton;

@property (weak, nonatomic) IBOutlet UILabel *nameLB;
@property (weak, nonatomic) IBOutlet UILabel *schoolLB;
@property (weak, nonatomic) IBOutlet UILabel *phoneLB;
@property (weak, nonatomic) IBOutlet UILabel *emailLB;
@property (weak, nonatomic) IBOutlet UILabel *addressLB;

@property (nonatomic,retain)id<ProfressorCellDelegate> delegate;

-(void)setInfo:(Courses *)info;

@end
