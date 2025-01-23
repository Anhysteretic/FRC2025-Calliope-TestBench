#pragma once

#include "frc/geometry/Pose2d.h"
#include "frc/geometry/Rotation2d.h"
#include "frc/geometry/Translation2d.h"
#include "pathplanner/lib/config/ModuleConfig.h"
#include "units/moment_of_inertia.h"
#include <pathplanner/lib/config/RobotConfig.h>
#include <frc/system/plant/DCMotor.h>
#include <vector>

class pathplannerConstants{
    public:
        inline static const pathplanner::RobotConfig config = pathplanner::RobotConfig(
            49.8952_kg,
            units::kilogram_square_meter_t{4.6468320808371},
            pathplanner::ModuleConfig(
                2_in,
                5.45_mps,
                1.5,
                frc::DCMotor::KrakenX60(),
                5.143,
                120_A,
                1
            ),
            std::vector<frc::Translation2d>(
                {
                    frc::Translation2d(10.3925_in, 10.3925_in),
                    frc::Translation2d(10.3925_in, -10.3925_in),
                    frc::Translation2d(-10.3925_in, 10.3925_in),
                    frc::Translation2d(-10.3925_in, -10.3925_in)
                }
            )
        );
        
        //inline static const frc::Pose2d target = frc::Pose2d(536.961_in, 119.424_in, frc::Rotation2d(120_deg));
        inline static const frc::Pose2d target = frc::Pose2d(14.47_m, 4.2_m, frc::Rotation2d(180_deg));

        //inline static const frc::Pose2d target = frc::Pose2d(536.961_in, 119.424_in, frc::Rotation2d(210_deg));
};